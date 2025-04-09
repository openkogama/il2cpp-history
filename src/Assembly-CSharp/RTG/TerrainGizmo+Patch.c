
/* Void Clamp(Int32) */

void Assembly-CSharp.dll::RTG::TerrainGizmo+Patch::TerrainGizmo_Patch_Clamp
               (TerrainGizmo_Patch *this,int32_t heightmapRes,MethodInfo *method)

{
  iVar1 = heightmapRes + -1;
  iVar2 = this->MinCol;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  this->MinCol = iVar2;
  iVar2 = this->MaxCol;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  this->MaxCol = iVar2;
  iVar2 = this->MinDepth;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (iVar1 < iVar2) {
    iVar2 = iVar1;
  }
  this->MinDepth = iVar2;
  iVar2 = this->MaxDepth;
  if (-1 < iVar2) {
    if (iVar1 < iVar2) {
      this->MaxDepth = iVar1;
      return;
    }
    this->MaxDepth = iVar2;
    return;
  }
  this->MaxDepth = 0;
  return;
}

