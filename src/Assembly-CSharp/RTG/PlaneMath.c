
/* Boolean Raycast2D(Vector2, Vector2, Vector2, Vector2, Single ByRef) */

bool Assembly-CSharp.dll::RTG::PlaneMath::PlaneMath_Raycast2D
               (Vector2 rayOrigin,Vector2 rayDir,Vector2 planeNormal,Vector2 ptOnPlane,float *t,
               MethodInfo *method)

{
  *t = 0.0;
  fVar1 = rayDir.x * planeNormal.x + rayDir.y * planeNormal.y;
  if (_UNK_? <= (float)((uint)fVar1 & _UNK_?)) {
    fVar1 = (planeNormal.x * (rayOrigin.x - ptOnPlane.x) +
            planeNormal.y * (rayOrigin.y - ptOnPlane.y)) /
            (float)((uint)fVar1 ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    *t = fVar1;
    return 0.0 <= fVar1;
  }
  return 0;
}

