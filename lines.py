import cv2
import numpy as np
# READING FRAMES
video = cv2.VideoCapture(0, cv2.CAP_V4L)
while True:
    success, frame = video.read()
    if success==True:
        final_frame = frame.copy()
        gray = cv2.cvtColor(final_frame, cv2.COLOR_BGR2GRAY)
        edges = cv2.Canny(gray, 100, 400)
        edges2 = edges.copy()#doubling the layer
        lines = cv2.HoughLinesP(edges2, 1, np.pi / 180, 200)
        if lines is not None:
            for line in lines:
                x1, y1, x2, y2 = line[0]
                cv2.line(final_frame, (x1-5, y1), (x2+5, y2), (0, 255, 0), 10)
                edges2 = cv2.Canny(final_frame, 100, 400)
                cv2.rectangle(frame,(x1-50,y1-20), (x2+50,y2+20), (0,255,0), 1)
        cv2.imshow("frame", frame)
        cv2.imshow("edges", edges)
        cv2.imshow("edges2", edges2)
        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
