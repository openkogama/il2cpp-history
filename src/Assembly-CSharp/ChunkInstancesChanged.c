
/* ChunkInstancesChanged(ChunkInstancesChanged+ChangeType, IntVector) */

void Assembly-CSharp.dll::ChunkInstancesChanged::ChunkInstancesChanged__ctor
               (ChunkInstancesChanged *this,ChunkInstancesChanged_ChangeType__Enum changeType,
               IntVector *chunkPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventArgs);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__System__EventArgs->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar1 = chunkPos->y;
  (this->fields).chunkPos.x = chunkPos->x;
  (this->fields).chunkPos.y = iVar1;
  iVar1 = chunkPos->z;
  (this->fields).changeType = changeType;
  (this->fields).chunkPos.z = iVar1;
  return;
}

