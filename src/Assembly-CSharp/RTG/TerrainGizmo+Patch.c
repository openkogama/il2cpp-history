
/* Void Clamp(Int32) */

void Assembly-CSharp.dll::RTG::TerrainGizmo+Patch::TerrainGizmo_Patch_Clamp
               (TerrainGizmo_Patch *this,int32_t heightmapRes,MethodInfo *method)

{
  iVar1 = this->MinCol;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (heightmapRes + -1 < iVar1) {
    iVar1 = heightmapRes + -1;
  }
  this->MinCol = iVar1;
  iVar1 = this->MaxCol;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (heightmapRes + -1 < iVar1) {
    iVar1 = heightmapRes + -1;
  }
  this->MaxCol = iVar1;
  iVar1 = this->MinDepth;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (heightmapRes + -1 < iVar1) {
    iVar1 = heightmapRes + -1;
  }
  this->MinDepth = iVar1;
  iVar1 = this->MaxDepth;
  if (-1 < iVar1) {
    if (heightmapRes + -1 < iVar1) {
      this->MaxDepth = heightmapRes + -1;
      return;
    }
    this->MaxDepth = iVar1;
    return;
  }
  this->MaxDepth = 0;
  return;
}

