
/* Boolean Raycast2D(Vector2, Vector2, Vector2, Vector2, Single ByRef) */

bool Assembly-CSharp.dll::RTG::PlaneMath::PlaneMath_Raycast2D
               (Vector2 rayOrigin,Vector2 rayDir,Vector2 planeNormal,Vector2 ptOnPlane,float *t,
               MethodInfo *method)

{
  *t = 0.0;
  uStack_1 = planeNormal.y;
  uStack_2 = planeNormal.x;
  uStack_3 = rayDir.y;
  uStack_4 = rayDir.x;
  fVar5 = uStack_1 * uStack_3 + uStack_2 * uStack_4;
  if (_UNK_? <= (float)((uint)fVar5 & _UNK_?)) {
    uStack_6 = rayOrigin.x;
    uStack_7 = ptOnPlane.x;
    uStack_8 = rayOrigin.y;
    uStack_9 = ptOnPlane.y;
    fVar5 = ((uStack_8 - uStack_9) * uStack_1 + (uStack_6 - uStack_7) * uStack_2) /
            (float)((uint)fVar5 ^ _UNK_?);
    *t = fVar5;
    return 0.0 <= fVar5;
  }
  return 0;
}

