
/* Boolean Raycast2D(Vector2, Vector2, Vector2, Vector2, Single ByRef) */

bool Assembly-CSharp.dll::RTG::PlaneMath::PlaneMath_Raycast2D(Vector2 rayOrigin,Vector2 rayDir,Vector2 planeNormal,Vector2 ptOnPlane,float *t,MethodInfo *method)

{
  *t = 0.0;
  fVar1 = rayDir.x * planeNormal.x + rayDir.y * planeNormal.y;
  if (1e-05 <= ABS(fVar1)) {
    fVar1 = (planeNormal.x * (rayOrigin.x - ptOnPlane.x) + planeNormal.y * (rayOrigin.y - ptOnPlane.y)) / -fVar1;
    *t = fVar1;
    return 0.0 <= fVar1;
  }
  return 0;
}

