
/* ChunkInstancesChanged(ChunkInstancesChanged+ChangeType, IntVector) */

void Assembly-CSharp.dll::ChunkInstancesChanged::ChunkInstancesChanged__ctor
               (ChunkInstancesChanged *this,ChunkInstancesChanged_ChangeType__Enum changeType,
               IntVector chunkPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__EventArgs->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__EventArgs->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__EventArgs);
  }
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this,(MethodInfo *)0x0);
  (this->fields).changeType = changeType;
  (this->fields).chunkPos.x = chunkPos.x;
  (this->fields).chunkPos.y = chunkPos.y;
  (this->fields).chunkPos.z = chunkPos.z;
  return;
}

