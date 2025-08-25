
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
                   __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
    *t = fVar1;
    return 0.0 <= fVar1;
  }
  return 0;
}

