
/* LineDrawManager+LinkLine(Vector3, Vector3, Color) */

void Assembly-CSharp.dll::LineDrawManager+LinkLine::LineDrawManager_LinkLine__ctor
               (LineDrawManager_LinkLine *this,Vector3 *startPos,Vector3 *endPos,Color *color,
               MethodInfo *method)

{
  fVar1 = startPos->y;
  fVar2 = startPos->z;
  (this->fields).startPos.x = startPos->x;
  (this->fields).startPos.y = fVar1;
  fVar1 = endPos->y;
  (this->fields).endPos.x = endPos->x;
  (this->fields).endPos.y = fVar1;
  fVar1 = color->r;
  fVar3 = color->g;
  fVar4 = color->b;
  fVar5 = color->a;
  (this->fields).startPos.z = fVar2;
  fVar2 = endPos->z;
  (this->fields).color.r = fVar1;
  (this->fields).color.g = fVar3;
  (this->fields).color.b = fVar4;
  (this->fields).color.a = fVar5;
  (this->fields).endPos.z = fVar2;
  return;
}

