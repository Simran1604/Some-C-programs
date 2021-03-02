/* Program to calculate and print Pythagorean triplets less than 500.
 Name- Simran Pattnaik
 Date-12/01/2021
 */
# include <stdio.h>
# include <math.h>
int main (void)
{
    //Statements
    for(int i=1;i<=500;i++)  //for loop for side1
    {
        for(int j=1;j<=i;j++)  //for loop for side2
        {
            for(int k=1;k<=i;k++)  //for loop for side3
            {
                if(i*i+j*j==k*k || i*i==j*j+k*k || i*i +k*k==j*j)
                printf("%d %d %d form a Pythagorean triplet.\n",i,j,k);
            }
        }
    }
    return 0;
}//main
/*
OUTPUT : 
5 3 4 form a Pythagorean triplet.
5 4 3 form a Pythagorean triplet.  
10 6 8 form a Pythagorean triplet. 
10 8 6 form a Pythagorean triplet. 
13 5 12 form a Pythagorean triplet.
13 12 5 form a Pythagorean triplet.
15 9 12 form a Pythagorean triplet.
15 12 9 form a Pythagorean triplet.
17 8 15 form a Pythagorean triplet.
17 15 8 form a Pythagorean triplet.
20 12 16 form a Pythagorean triplet.
20 16 12 form a Pythagorean triplet.
25 7 24 form a Pythagorean triplet.
25 15 20 form a Pythagorean triplet.
25 20 15 form a Pythagorean triplet.
25 24 7 form a Pythagorean triplet.
26 10 24 form a Pythagorean triplet.
26 24 10 form a Pythagorean triplet.
29 20 21 form a Pythagorean triplet.
29 21 20 form a Pythagorean triplet.
30 18 24 form a Pythagorean triplet.
30 24 18 form a Pythagorean triplet.
34 16 30 form a Pythagorean triplet.
34 30 16 form a Pythagorean triplet.
35 21 28 form a Pythagorean triplet.
35 28 21 form a Pythagorean triplet.
37 12 35 form a Pythagorean triplet.
37 35 12 form a Pythagorean triplet.
39 15 36 form a Pythagorean triplet.
39 36 15 form a Pythagorean triplet.
40 24 32 form a Pythagorean triplet.
40 32 24 form a Pythagorean triplet.
41 9 40 form a Pythagorean triplet.
41 40 9 form a Pythagorean triplet.
45 27 36 form a Pythagorean triplet.
45 36 27 form a Pythagorean triplet.
50 14 48 form a Pythagorean triplet.
50 30 40 form a Pythagorean triplet.
50 40 30 form a Pythagorean triplet.
50 48 14 form a Pythagorean triplet.
51 24 45 form a Pythagorean triplet.
51 45 24 form a Pythagorean triplet.
52 20 48 form a Pythagorean triplet.
52 48 20 form a Pythagorean triplet.
53 28 45 form a Pythagorean triplet.
53 45 28 form a Pythagorean triplet.
55 33 44 form a Pythagorean triplet.
55 44 33 form a Pythagorean triplet.
58 40 42 form a Pythagorean triplet.
58 42 40 form a Pythagorean triplet.
60 36 48 form a Pythagorean triplet.
60 48 36 form a Pythagorean triplet.
61 11 60 form a Pythagorean triplet.
61 60 11 form a Pythagorean triplet.
65 16 63 form a Pythagorean triplet.
65 25 60 form a Pythagorean triplet.
65 33 56 form a Pythagorean triplet.
65 39 52 form a Pythagorean triplet.
65 52 39 form a Pythagorean triplet.
65 56 33 form a Pythagorean triplet.
65 60 25 form a Pythagorean triplet.
65 63 16 form a Pythagorean triplet.
68 32 60 form a Pythagorean triplet.
68 60 32 form a Pythagorean triplet.
70 42 56 form a Pythagorean triplet.
70 56 42 form a Pythagorean triplet.
73 48 55 form a Pythagorean triplet.
73 55 48 form a Pythagorean triplet.
74 24 70 form a Pythagorean triplet.
74 70 24 form a Pythagorean triplet.
75 21 72 form a Pythagorean triplet.
75 45 60 form a Pythagorean triplet.
75 60 45 form a Pythagorean triplet.
75 72 21 form a Pythagorean triplet.
78 30 72 form a Pythagorean triplet.
78 72 30 form a Pythagorean triplet.
80 48 64 form a Pythagorean triplet.
80 64 48 form a Pythagorean triplet.
82 18 80 form a Pythagorean triplet.
82 80 18 form a Pythagorean triplet.
85 13 84 form a Pythagorean triplet.
85 36 77 form a Pythagorean triplet.
85 40 75 form a Pythagorean triplet.
85 51 68 form a Pythagorean triplet.
85 68 51 form a Pythagorean triplet.
85 75 40 form a Pythagorean triplet.
85 77 36 form a Pythagorean triplet.
85 84 13 form a Pythagorean triplet.
87 60 63 form a Pythagorean triplet.
87 63 60 form a Pythagorean triplet.
89 39 80 form a Pythagorean triplet.
89 80 39 form a Pythagorean triplet.
90 54 72 form a Pythagorean triplet.
90 72 54 form a Pythagorean triplet.
91 35 84 form a Pythagorean triplet.
91 84 35 form a Pythagorean triplet.
95 57 76 form a Pythagorean triplet.
95 76 57 form a Pythagorean triplet.
97 65 72 form a Pythagorean triplet.
97 72 65 form a Pythagorean triplet.
100 28 96 form a Pythagorean triplet.
100 60 80 form a Pythagorean triplet.
100 80 60 form a Pythagorean triplet.
100 96 28 form a Pythagorean triplet.
101 20 99 form a Pythagorean triplet.
101 99 20 form a Pythagorean triplet.
102 48 90 form a Pythagorean triplet.
102 90 48 form a Pythagorean triplet.
104 40 96 form a Pythagorean triplet.
104 96 40 form a Pythagorean triplet.
105 63 84 form a Pythagorean triplet.
105 84 63 form a Pythagorean triplet.
106 56 90 form a Pythagorean triplet.
106 90 56 form a Pythagorean triplet.
109 60 91 form a Pythagorean triplet.
109 91 60 form a Pythagorean triplet.
110 66 88 form a Pythagorean triplet.
110 88 66 form a Pythagorean triplet.
111 36 105 form a Pythagorean triplet.
111 105 36 form a Pythagorean triplet.
113 15 112 form a Pythagorean triplet.
113 112 15 form a Pythagorean triplet.
115 69 92 form a Pythagorean triplet.
115 92 69 form a Pythagorean triplet.
116 80 84 form a Pythagorean triplet.
116 84 80 form a Pythagorean triplet.
117 45 108 form a Pythagorean triplet.
117 108 45 form a Pythagorean triplet.
119 56 105 form a Pythagorean triplet.
119 105 56 form a Pythagorean triplet.
120 72 96 form a Pythagorean triplet.
120 96 72 form a Pythagorean triplet.
122 22 120 form a Pythagorean triplet.
122 120 22 form a Pythagorean triplet.
123 27 120 form a Pythagorean triplet.
123 120 27 form a Pythagorean triplet.
125 35 120 form a Pythagorean triplet.
125 44 117 form a Pythagorean triplet.
125 75 100 form a Pythagorean triplet.
125 100 75 form a Pythagorean triplet.
125 117 44 form a Pythagorean triplet.
125 120 35 form a Pythagorean triplet.
130 32 126 form a Pythagorean triplet.
130 50 120 form a Pythagorean triplet.
130 66 112 form a Pythagorean triplet.
130 78 104 form a Pythagorean triplet.
130 104 78 form a Pythagorean triplet.
130 112 66 form a Pythagorean triplet.
130 120 50 form a Pythagorean triplet.
130 126 32 form a Pythagorean triplet.
135 81 108 form a Pythagorean triplet.
135 108 81 form a Pythagorean triplet.
136 64 120 form a Pythagorean triplet.
136 120 64 form a Pythagorean triplet.
137 88 105 form a Pythagorean triplet.
137 105 88 form a Pythagorean triplet.
140 84 112 form a Pythagorean triplet.
140 112 84 form a Pythagorean triplet.
143 55 132 form a Pythagorean triplet.
143 132 55 form a Pythagorean triplet.
145 17 144 form a Pythagorean triplet.
145 24 143 form a Pythagorean triplet.
145 87 116 form a Pythagorean triplet.
145 100 105 form a Pythagorean triplet.
145 105 100 form a Pythagorean triplet.
145 116 87 form a Pythagorean triplet.
145 143 24 form a Pythagorean triplet.
145 144 17 form a Pythagorean triplet.
146 96 110 form a Pythagorean triplet.
146 110 96 form a Pythagorean triplet.
148 48 140 form a Pythagorean triplet.
148 140 48 form a Pythagorean triplet.
149 51 140 form a Pythagorean triplet.
149 140 51 form a Pythagorean triplet.
150 42 144 form a Pythagorean triplet.
150 90 120 form a Pythagorean triplet.
150 120 90 form a Pythagorean triplet.
150 144 42 form a Pythagorean triplet.
153 72 135 form a Pythagorean triplet.
153 135 72 form a Pythagorean triplet.
155 93 124 form a Pythagorean triplet.
155 124 93 form a Pythagorean triplet.
156 60 144 form a Pythagorean triplet.
156 144 60 form a Pythagorean triplet.
157 85 132 form a Pythagorean triplet.
157 132 85 form a Pythagorean triplet.
159 84 135 form a Pythagorean triplet.
159 135 84 form a Pythagorean triplet.
160 96 128 form a Pythagorean triplet.
160 128 96 form a Pythagorean triplet.
164 36 160 form a Pythagorean triplet.
164 160 36 form a Pythagorean triplet.
165 99 132 form a Pythagorean triplet.
165 132 99 form a Pythagorean triplet.
169 65 156 form a Pythagorean triplet.
169 119 120 form a Pythagorean triplet.
169 120 119 form a Pythagorean triplet.
169 156 65 form a Pythagorean triplet.
170 26 168 form a Pythagorean triplet.
170 72 154 form a Pythagorean triplet.
170 80 150 form a Pythagorean triplet.
170 102 136 form a Pythagorean triplet.
170 136 102 form a Pythagorean triplet.
170 150 80 form a Pythagorean triplet.
170 154 72 form a Pythagorean triplet.
170 168 26 form a Pythagorean triplet.
173 52 165 form a Pythagorean triplet.
173 165 52 form a Pythagorean triplet.
174 120 126 form a Pythagorean triplet.
174 126 120 form a Pythagorean triplet.
175 49 168 form a Pythagorean triplet.
175 105 140 form a Pythagorean triplet.
175 140 105 form a Pythagorean triplet.
175 168 49 form a Pythagorean triplet.
178 78 160 form a Pythagorean triplet.
178 160 78 form a Pythagorean triplet.
180 108 144 form a Pythagorean triplet.
180 144 108 form a Pythagorean triplet.
181 19 180 form a Pythagorean triplet.
181 180 19 form a Pythagorean triplet.
182 70 168 form a Pythagorean triplet.
182 168 70 form a Pythagorean triplet.
183 33 180 form a Pythagorean triplet.
183 180 33 form a Pythagorean triplet.
185 57 176 form a Pythagorean triplet.
185 60 175 form a Pythagorean triplet.
185 104 153 form a Pythagorean triplet.
185 111 148 form a Pythagorean triplet.
185 148 111 form a Pythagorean triplet.
185 153 104 form a Pythagorean triplet.
185 175 60 form a Pythagorean triplet.
185 176 57 form a Pythagorean triplet.
187 88 165 form a Pythagorean triplet.
187 165 88 form a Pythagorean triplet.
190 114 152 form a Pythagorean triplet.
190 152 114 form a Pythagorean triplet.
193 95 168 form a Pythagorean triplet.
193 168 95 form a Pythagorean triplet.
194 130 144 form a Pythagorean triplet.
194 144 130 form a Pythagorean triplet.
195 48 189 form a Pythagorean triplet.
195 75 180 form a Pythagorean triplet.
195 99 168 form a Pythagorean triplet.
195 117 156 form a Pythagorean triplet.
195 156 117 form a Pythagorean triplet.
195 168 99 form a Pythagorean triplet.
195 180 75 form a Pythagorean triplet.
195 189 48 form a Pythagorean triplet.
197 28 195 form a Pythagorean triplet.
197 195 28 form a Pythagorean triplet.
200 56 192 form a Pythagorean triplet.
200 120 160 form a Pythagorean triplet.
200 160 120 form a Pythagorean triplet.
200 192 56 form a Pythagorean triplet.
202 40 198 form a Pythagorean triplet.
202 198 40 form a Pythagorean triplet.
203 140 147 form a Pythagorean triplet.
203 147 140 form a Pythagorean triplet.
204 96 180 form a Pythagorean triplet.
204 180 96 form a Pythagorean triplet.
205 45 200 form a Pythagorean triplet.
205 84 187 form a Pythagorean triplet.
205 123 164 form a Pythagorean triplet.
205 133 156 form a Pythagorean triplet.
205 156 133 form a Pythagorean triplet.
205 164 123 form a Pythagorean triplet.
205 187 84 form a Pythagorean triplet.
205 200 45 form a Pythagorean triplet.
208 80 192 form a Pythagorean triplet.
208 192 80 form a Pythagorean triplet.
210 126 168 form a Pythagorean triplet.
210 168 126 form a Pythagorean triplet.
212 112 180 form a Pythagorean triplet.
212 180 112 form a Pythagorean triplet.
215 129 172 form a Pythagorean triplet.
215 172 129 form a Pythagorean triplet.
218 120 182 form a Pythagorean triplet.
218 182 120 form a Pythagorean triplet.
219 144 165 form a Pythagorean triplet.
219 165 144 form a Pythagorean triplet.
220 132 176 form a Pythagorean triplet.
220 176 132 form a Pythagorean triplet.
221 21 220 form a Pythagorean triplet.
221 85 204 form a Pythagorean triplet.
221 104 195 form a Pythagorean triplet.
221 140 171 form a Pythagorean triplet.
221 171 140 form a Pythagorean triplet.
221 195 104 form a Pythagorean triplet.
221 204 85 form a Pythagorean triplet.
221 220 21 form a Pythagorean triplet.
222 72 210 form a Pythagorean triplet.
222 210 72 form a Pythagorean triplet.
225 63 216 form a Pythagorean triplet.
225 135 180 form a Pythagorean triplet.
225 180 135 form a Pythagorean triplet.
225 216 63 form a Pythagorean triplet.
226 30 224 form a Pythagorean triplet.
226 224 30 form a Pythagorean triplet.
229 60 221 form a Pythagorean triplet.
229 221 60 form a Pythagorean triplet.
230 138 184 form a Pythagorean triplet.
230 184 138 form a Pythagorean triplet.
232 160 168 form a Pythagorean triplet.
232 168 160 form a Pythagorean triplet.
233 105 208 form a Pythagorean triplet.
233 208 105 form a Pythagorean triplet.
234 90 216 form a Pythagorean triplet.
234 216 90 form a Pythagorean triplet.
235 141 188 form a Pythagorean triplet.
235 188 141 form a Pythagorean triplet.
238 112 210 form a Pythagorean triplet.
238 210 112 form a Pythagorean triplet.
240 144 192 form a Pythagorean triplet.
240 192 144 form a Pythagorean triplet.
241 120 209 form a Pythagorean triplet.
241 209 120 form a Pythagorean triplet.
244 44 240 form a Pythagorean triplet.
244 240 44 form a Pythagorean triplet.
245 147 196 form a Pythagorean triplet.
245 196 147 form a Pythagorean triplet.
246 54 240 form a Pythagorean triplet.
246 240 54 form a Pythagorean triplet.
247 95 228 form a Pythagorean triplet.
247 228 95 form a Pythagorean triplet.
250 70 240 form a Pythagorean triplet.
250 88 234 form a Pythagorean triplet.
250 150 200 form a Pythagorean triplet.
250 200 150 form a Pythagorean triplet.
250 234 88 form a Pythagorean triplet.
250 240 70 form a Pythagorean triplet.
255 39 252 form a Pythagorean triplet.
255 108 231 form a Pythagorean triplet.
255 120 225 form a Pythagorean triplet.
255 153 204 form a Pythagorean triplet.
255 204 153 form a Pythagorean triplet.
255 225 120 form a Pythagorean triplet.
255 231 108 form a Pythagorean triplet.
255 252 39 form a Pythagorean triplet.
257 32 255 form a Pythagorean triplet.
257 255 32 form a Pythagorean triplet.
259 84 245 form a Pythagorean triplet.
259 245 84 form a Pythagorean triplet.
260 64 252 form a Pythagorean triplet.
260 100 240 form a Pythagorean triplet.
260 132 224 form a Pythagorean triplet.
260 156 208 form a Pythagorean triplet.
260 208 156 form a Pythagorean triplet.
260 224 132 form a Pythagorean triplet.
260 240 100 form a Pythagorean triplet.
260 252 64 form a Pythagorean triplet.
261 180 189 form a Pythagorean triplet.
261 189 180 form a Pythagorean triplet.
265 23 264 form a Pythagorean triplet.
265 96 247 form a Pythagorean triplet.
265 140 225 form a Pythagorean triplet.
265 159 212 form a Pythagorean triplet.
265 212 159 form a Pythagorean triplet.
265 225 140 form a Pythagorean triplet.
265 247 96 form a Pythagorean triplet.
265 264 23 form a Pythagorean triplet.
267 117 240 form a Pythagorean triplet.
267 240 117 form a Pythagorean triplet.
269 69 260 form a Pythagorean triplet.
269 260 69 form a Pythagorean triplet.
270 162 216 form a Pythagorean triplet.
270 216 162 form a Pythagorean triplet.
272 128 240 form a Pythagorean triplet.
272 240 128 form a Pythagorean triplet.
273 105 252 form a Pythagorean triplet.
273 252 105 form a Pythagorean triplet.
274 176 210 form a Pythagorean triplet.
274 210 176 form a Pythagorean triplet.
275 77 264 form a Pythagorean triplet.
275 165 220 form a Pythagorean triplet.
275 220 165 form a Pythagorean triplet.
275 264 77 form a Pythagorean triplet.
277 115 252 form a Pythagorean triplet.
277 252 115 form a Pythagorean triplet.
280 168 224 form a Pythagorean triplet.
280 224 168 form a Pythagorean triplet.
281 160 231 form a Pythagorean triplet.
281 231 160 form a Pythagorean triplet.
285 171 228 form a Pythagorean triplet.
285 228 171 form a Pythagorean triplet.
286 110 264 form a Pythagorean triplet.
286 264 110 form a Pythagorean triplet.
287 63 280 form a Pythagorean triplet.
287 280 63 form a Pythagorean triplet.
289 136 255 form a Pythagorean triplet.
289 161 240 form a Pythagorean triplet.
289 240 161 form a Pythagorean triplet.
289 255 136 form a Pythagorean triplet.
290 34 288 form a Pythagorean triplet.
290 48 286 form a Pythagorean triplet.
290 174 232 form a Pythagorean triplet.
290 200 210 form a Pythagorean triplet.
290 210 200 form a Pythagorean triplet.
290 232 174 form a Pythagorean triplet.
290 286 48 form a Pythagorean triplet.
290 288 34 form a Pythagorean triplet.
291 195 216 form a Pythagorean triplet.
291 216 195 form a Pythagorean triplet.
292 192 220 form a Pythagorean triplet.
292 220 192 form a Pythagorean triplet.
293 68 285 form a Pythagorean triplet.
293 285 68 form a Pythagorean triplet.
295 177 236 form a Pythagorean triplet.
295 236 177 form a Pythagorean triplet.
296 96 280 form a Pythagorean triplet.
296 280 96 form a Pythagorean triplet.
298 102 280 form a Pythagorean triplet.
298 280 102 form a Pythagorean triplet.
299 115 276 form a Pythagorean triplet.
299 276 115 form a Pythagorean triplet.
300 84 288 form a Pythagorean triplet.
300 180 240 form a Pythagorean triplet.
300 240 180 form a Pythagorean triplet.
300 288 84 form a Pythagorean triplet.
303 60 297 form a Pythagorean triplet.
303 297 60 form a Pythagorean triplet.
305 55 300 form a Pythagorean triplet.
305 136 273 form a Pythagorean triplet.
305 183 244 form a Pythagorean triplet.
305 207 224 form a Pythagorean triplet.
305 224 207 form a Pythagorean triplet.
305 244 183 form a Pythagorean triplet.
305 273 136 form a Pythagorean triplet.
305 300 55 form a Pythagorean triplet.
306 144 270 form a Pythagorean triplet.
306 270 144 form a Pythagorean triplet.
310 186 248 form a Pythagorean triplet.
310 248 186 form a Pythagorean triplet.
312 120 288 form a Pythagorean triplet.
312 288 120 form a Pythagorean triplet.
313 25 312 form a Pythagorean triplet.
313 312 25 form a Pythagorean triplet.
314 170 264 form a Pythagorean triplet.
314 264 170 form a Pythagorean triplet.
315 189 252 form a Pythagorean triplet.
315 252 189 form a Pythagorean triplet.
317 75 308 form a Pythagorean triplet.
317 308 75 form a Pythagorean triplet.
318 168 270 form a Pythagorean triplet.
318 270 168 form a Pythagorean triplet.
319 220 231 form a Pythagorean triplet.
319 231 220 form a Pythagorean triplet.
320 192 256 form a Pythagorean triplet.
320 256 192 form a Pythagorean triplet.
323 152 285 form a Pythagorean triplet.
323 285 152 form a Pythagorean triplet.
325 36 323 form a Pythagorean triplet.
325 80 315 form a Pythagorean triplet.
325 91 312 form a Pythagorean triplet.
325 125 300 form a Pythagorean triplet.
325 165 280 form a Pythagorean triplet.
325 195 260 form a Pythagorean triplet.
325 204 253 form a Pythagorean triplet.
325 253 204 form a Pythagorean triplet.
325 260 195 form a Pythagorean triplet.
325 280 165 form a Pythagorean triplet.
325 300 125 form a Pythagorean triplet.
325 312 91 form a Pythagorean triplet.
325 315 80 form a Pythagorean triplet.
325 323 36 form a Pythagorean triplet.
327 180 273 form a Pythagorean triplet.
327 273 180 form a Pythagorean triplet.
328 72 320 form a Pythagorean triplet.
328 320 72 form a Pythagorean triplet.
330 198 264 form a Pythagorean triplet.
330 264 198 form a Pythagorean triplet.
333 108 315 form a Pythagorean triplet.
333 315 108 form a Pythagorean triplet.
335 201 268 form a Pythagorean triplet.
335 268 201 form a Pythagorean triplet.
337 175 288 form a Pythagorean triplet.
337 288 175 form a Pythagorean triplet.
338 130 312 form a Pythagorean triplet.
338 238 240 form a Pythagorean triplet.
338 240 238 form a Pythagorean triplet.
338 312 130 form a Pythagorean triplet.
339 45 336 form a Pythagorean triplet.
339 336 45 form a Pythagorean triplet.
340 52 336 form a Pythagorean triplet.
340 144 308 form a Pythagorean triplet.
340 160 300 form a Pythagorean triplet.
340 204 272 form a Pythagorean triplet.
340 272 204 form a Pythagorean triplet.
340 300 160 form a Pythagorean triplet.
340 308 144 form a Pythagorean triplet.
340 336 52 form a Pythagorean triplet.
345 207 276 form a Pythagorean triplet.
345 276 207 form a Pythagorean triplet.
346 104 330 form a Pythagorean triplet.
346 330 104 form a Pythagorean triplet.
348 240 252 form a Pythagorean triplet.
348 252 240 form a Pythagorean triplet.
349 180 299 form a Pythagorean triplet.
349 299 180 form a Pythagorean triplet.
350 98 336 form a Pythagorean triplet.
350 210 280 form a Pythagorean triplet.
350 280 210 form a Pythagorean triplet.
350 336 98 form a Pythagorean triplet.
351 135 324 form a Pythagorean triplet.
351 324 135 form a Pythagorean triplet.
353 225 272 form a Pythagorean triplet.
353 272 225 form a Pythagorean triplet.
355 213 284 form a Pythagorean triplet.
355 284 213 form a Pythagorean triplet.
356 156 320 form a Pythagorean triplet.
356 320 156 form a Pythagorean triplet.
357 168 315 form a Pythagorean triplet.
357 315 168 form a Pythagorean triplet.
360 216 288 form a Pythagorean triplet.
360 288 216 form a Pythagorean triplet.
362 38 360 form a Pythagorean triplet.
362 360 38 form a Pythagorean triplet.
364 140 336 form a Pythagorean triplet.
364 336 140 form a Pythagorean triplet.
365 27 364 form a Pythagorean triplet.
365 76 357 form a Pythagorean triplet.
365 219 292 form a Pythagorean triplet.
365 240 275 form a Pythagorean triplet.
365 275 240 form a Pythagorean triplet.
365 292 219 form a Pythagorean triplet.
365 357 76 form a Pythagorean triplet.
365 364 27 form a Pythagorean triplet.
366 66 360 form a Pythagorean triplet.
366 360 66 form a Pythagorean triplet.
369 81 360 form a Pythagorean triplet.
369 360 81 form a Pythagorean triplet.
370 114 352 form a Pythagorean triplet.
370 120 350 form a Pythagorean triplet.
370 208 306 form a Pythagorean triplet.
370 222 296 form a Pythagorean triplet.
370 296 222 form a Pythagorean triplet.
370 306 208 form a Pythagorean triplet.
370 350 120 form a Pythagorean triplet.
370 352 114 form a Pythagorean triplet.
371 196 315 form a Pythagorean triplet.
371 315 196 form a Pythagorean triplet.
373 252 275 form a Pythagorean triplet.
373 275 252 form a Pythagorean triplet.
374 176 330 form a Pythagorean triplet.
374 330 176 form a Pythagorean triplet.
375 105 360 form a Pythagorean triplet.
375 132 351 form a Pythagorean triplet.
375 225 300 form a Pythagorean triplet.
375 300 225 form a Pythagorean triplet.
375 351 132 form a Pythagorean triplet.
375 360 105 form a Pythagorean triplet.
377 135 352 form a Pythagorean triplet.
377 145 348 form a Pythagorean triplet.
377 152 345 form a Pythagorean triplet.
377 260 273 form a Pythagorean triplet.
377 273 260 form a Pythagorean triplet.
377 345 152 form a Pythagorean triplet.
377 348 145 form a Pythagorean triplet.
377 352 135 form a Pythagorean triplet.
380 228 304 form a Pythagorean triplet.
380 304 228 form a Pythagorean triplet.
385 231 308 form a Pythagorean triplet.
385 308 231 form a Pythagorean triplet.
386 190 336 form a Pythagorean triplet.
386 336 190 form a Pythagorean triplet.
388 260 288 form a Pythagorean triplet.
388 288 260 form a Pythagorean triplet.
389 189 340 form a Pythagorean triplet.
389 340 189 form a Pythagorean triplet.
390 96 378 form a Pythagorean triplet.
390 150 360 form a Pythagorean triplet.
390 198 336 form a Pythagorean triplet.
390 234 312 form a Pythagorean triplet.
390 312 234 form a Pythagorean triplet.
390 336 198 form a Pythagorean triplet.
390 360 150 form a Pythagorean triplet.
390 378 96 form a Pythagorean triplet.
391 184 345 form a Pythagorean triplet.
391 345 184 form a Pythagorean triplet.
394 56 390 form a Pythagorean triplet.
394 390 56 form a Pythagorean triplet.
395 237 316 form a Pythagorean triplet.
395 316 237 form a Pythagorean triplet.
397 228 325 form a Pythagorean triplet.
397 325 228 form a Pythagorean triplet.
400 112 384 form a Pythagorean triplet.
400 240 320 form a Pythagorean triplet.
400 320 240 form a Pythagorean triplet.
400 384 112 form a Pythagorean triplet.
401 40 399 form a Pythagorean triplet.
401 399 40 form a Pythagorean triplet.
403 155 372 form a Pythagorean triplet.
403 372 155 form a Pythagorean triplet.
404 80 396 form a Pythagorean triplet.
404 396 80 form a Pythagorean triplet.
405 243 324 form a Pythagorean triplet.
405 324 243 form a Pythagorean triplet.
406 280 294 form a Pythagorean triplet.
406 294 280 form a Pythagorean triplet.
407 132 385 form a Pythagorean triplet.
407 385 132 form a Pythagorean triplet.
408 192 360 form a Pythagorean triplet.
408 360 192 form a Pythagorean triplet.
409 120 391 form a Pythagorean triplet.
409 391 120 form a Pythagorean triplet.
410 90 400 form a Pythagorean triplet.
410 168 374 form a Pythagorean triplet.
410 246 328 form a Pythagorean triplet.
410 266 312 form a Pythagorean triplet.
410 312 266 form a Pythagorean triplet.
410 328 246 form a Pythagorean triplet.
410 374 168 form a Pythagorean triplet.
410 400 90 form a Pythagorean triplet.
411 264 315 form a Pythagorean triplet.
411 315 264 form a Pythagorean triplet.
415 249 332 form a Pythagorean triplet.
415 332 249 form a Pythagorean triplet.
416 160 384 form a Pythagorean triplet.
416 384 160 form a Pythagorean triplet.
420 252 336 form a Pythagorean triplet.
420 336 252 form a Pythagorean triplet.
421 29 420 form a Pythagorean triplet.
421 420 29 form a Pythagorean triplet.
424 224 360 form a Pythagorean triplet.
424 360 224 form a Pythagorean triplet.
425 65 420 form a Pythagorean triplet.
425 87 416 form a Pythagorean triplet.
425 119 408 form a Pythagorean triplet.
425 180 385 form a Pythagorean triplet.
425 200 375 form a Pythagorean triplet.
425 255 340 form a Pythagorean triplet.
425 297 304 form a Pythagorean triplet.
425 304 297 form a Pythagorean triplet.
425 340 255 form a Pythagorean triplet.
425 375 200 form a Pythagorean triplet.
425 385 180 form a Pythagorean triplet.
425 408 119 form a Pythagorean triplet.
425 416 87 form a Pythagorean triplet.
425 420 65 form a Pythagorean triplet.
427 77 420 form a Pythagorean triplet.
427 420 77 form a Pythagorean triplet.
429 165 396 form a Pythagorean triplet.
429 396 165 form a Pythagorean triplet.
430 258 344 form a Pythagorean triplet.
430 344 258 form a Pythagorean triplet.
433 145 408 form a Pythagorean triplet.
433 408 145 form a Pythagorean triplet.
435 51 432 form a Pythagorean triplet.
435 72 429 form a Pythagorean triplet.
435 261 348 form a Pythagorean triplet.
435 300 315 form a Pythagorean triplet.
435 315 300 form a Pythagorean triplet.
435 348 261 form a Pythagorean triplet.
435 429 72 form a Pythagorean triplet.
435 432 51 form a Pythagorean triplet.
436 240 364 form a Pythagorean triplet.
436 364 240 form a Pythagorean triplet.
438 288 330 form a Pythagorean triplet.
438 330 288 form a Pythagorean triplet.
440 264 352 form a Pythagorean triplet.
440 352 264 form a Pythagorean triplet.
442 42 440 form a Pythagorean triplet.
442 170 408 form a Pythagorean triplet.
442 208 390 form a Pythagorean triplet.
442 280 342 form a Pythagorean triplet.
442 342 280 form a Pythagorean triplet.
442 390 208 form a Pythagorean triplet.
442 408 170 form a Pythagorean triplet.
442 440 42 form a Pythagorean triplet.
444 144 420 form a Pythagorean triplet.
444 420 144 form a Pythagorean triplet.
445 84 437 form a Pythagorean triplet.
445 195 400 form a Pythagorean triplet.
445 203 396 form a Pythagorean triplet.
445 267 356 form a Pythagorean triplet.
445 356 267 form a Pythagorean triplet.
445 396 203 form a Pythagorean triplet.
445 400 195 form a Pythagorean triplet.
445 437 84 form a Pythagorean triplet.
447 153 420 form a Pythagorean triplet.
447 420 153 form a Pythagorean triplet.
449 280 351 form a Pythagorean triplet.
449 351 280 form a Pythagorean triplet.
450 126 432 form a Pythagorean triplet.
450 270 360 form a Pythagorean triplet.
450 360 270 form a Pythagorean triplet.
450 432 126 form a Pythagorean triplet.
451 99 440 form a Pythagorean triplet.
451 440 99 form a Pythagorean triplet.
452 60 448 form a Pythagorean triplet.
452 448 60 form a Pythagorean triplet.
455 112 441 form a Pythagorean triplet.
455 175 420 form a Pythagorean triplet.
455 231 392 form a Pythagorean triplet.
455 273 364 form a Pythagorean triplet.
455 364 273 form a Pythagorean triplet.
455 392 231 form a Pythagorean triplet.
455 420 175 form a Pythagorean triplet.
455 441 112 form a Pythagorean triplet.
457 168 425 form a Pythagorean triplet.
457 425 168 form a Pythagorean triplet.
458 120 442 form a Pythagorean triplet.
458 442 120 form a Pythagorean triplet.
459 216 405 form a Pythagorean triplet.
459 405 216 form a Pythagorean triplet.
460 276 368 form a Pythagorean triplet.
460 368 276 form a Pythagorean triplet.
461 261 380 form a Pythagorean triplet.
461 380 261 form a Pythagorean triplet.
464 320 336 form a Pythagorean triplet.
464 336 320 form a Pythagorean triplet.
465 279 372 form a Pythagorean triplet.
465 372 279 form a Pythagorean triplet.
466 210 416 form a Pythagorean triplet.
466 416 210 form a Pythagorean triplet.
468 180 432 form a Pythagorean triplet.
468 432 180 form a Pythagorean triplet.
470 282 376 form a Pythagorean triplet.
470 376 282 form a Pythagorean triplet.
471 255 396 form a Pythagorean triplet.
471 396 255 form a Pythagorean triplet.
475 133 456 form a Pythagorean triplet.
475 285 380 form a Pythagorean triplet.
475 380 285 form a Pythagorean triplet.
475 456 133 form a Pythagorean triplet.
476 224 420 form a Pythagorean triplet.
476 420 224 form a Pythagorean triplet.
477 252 405 form a Pythagorean triplet.
477 405 252 form a Pythagorean triplet.
480 288 384 form a Pythagorean triplet.
480 384 288 form a Pythagorean triplet.
481 31 480 form a Pythagorean triplet.
481 156 455 form a Pythagorean triplet.
481 185 444 form a Pythagorean triplet.
481 319 360 form a Pythagorean triplet.
481 360 319 form a Pythagorean triplet.
481 444 185 form a Pythagorean triplet.
481 455 156 form a Pythagorean triplet.
481 480 31 form a Pythagorean triplet.
482 240 418 form a Pythagorean triplet.
482 418 240 form a Pythagorean triplet.
485 44 483 form a Pythagorean triplet.
485 93 476 form a Pythagorean triplet.
485 291 388 form a Pythagorean triplet.
485 325 360 form a Pythagorean triplet.
485 360 325 form a Pythagorean triplet.
485 388 291 form a Pythagorean triplet.
485 476 93 form a Pythagorean triplet.
485 483 44 form a Pythagorean triplet.
488 88 480 form a Pythagorean triplet.
488 480 88 form a Pythagorean triplet.
490 294 392 form a Pythagorean triplet.
490 392 294 form a Pythagorean triplet.
492 108 480 form a Pythagorean triplet.
492 480 108 form a Pythagorean triplet.
493 132 475 form a Pythagorean triplet.
493 155 468 form a Pythagorean triplet.
493 232 435 form a Pythagorean triplet.
493 340 357 form a Pythagorean triplet.
493 357 340 form a Pythagorean triplet.
493 435 232 form a Pythagorean triplet.
493 468 155 form a Pythagorean triplet.
493 475 132 form a Pythagorean triplet.
494 190 456 form a Pythagorean triplet.
494 456 190 form a Pythagorean triplet.
495 297 396 form a Pythagorean triplet.
495 396 297 form a Pythagorean triplet.
500 140 480 form a Pythagorean triplet.
500 176 468 form a Pythagorean triplet.
500 300 400 form a Pythagorean triplet.
500 400 300 form a Pythagorean triplet.
500 468 176 form a Pythagorean triplet.
500 480 140 form a Pythagorean triplet.
*/