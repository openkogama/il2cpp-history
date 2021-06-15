
/* Type Update(AdvancedGhostBehaviour) */

Type * Assembly-CSharp.dll::AdvancedGhostBehaviour+ResetState::
       AdvancedGhostBehaviour_ResetState_Update
                 (AdvancedGhostBehaviour_ResetState *this,AdvancedGhostBehaviour *ghostBehaviour,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  handle = TypeRef__AdvancedGhostBehaviour__Idle;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  pTVar1 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                     ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  return pTVar1;
}

