
/* Void Enter(AdvancedGhostBehaviour) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Dead::AdvancedGhostBehaviour_Dead_Enter
               (AdvancedGhostBehaviour_Dead *this,AdvancedGhostBehaviour *ghostBehaviour,
               MethodInfo *method)

{
  if ((ghostBehaviour != (AdvancedGhostBehaviour *)0x0) &&
     (this_00 = (ghostBehaviour->fields).GhostVisualization,
     this_00 != (AdvancedGhostVisualizaton *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      iVar1 = (ghostBehaviour->fields).lives;
      if (0 < iVar1) {
        (ghostBehaviour->fields).lives = iVar1 + -1;
      }
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Exit(AdvancedGhostBehaviour) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Dead::AdvancedGhostBehaviour_Dead_Exit
               (AdvancedGhostBehaviour_Dead *this,AdvancedGhostBehaviour *ghostBehaviour,
               MethodInfo *method)

{
  if (ghostBehaviour != (AdvancedGhostBehaviour *)0x0) {
    (ghostBehaviour->fields).respawn = 1;
    this_00 = (ghostBehaviour->fields).GhostVisualization;
    if (this_00 != (AdvancedGhostVisualizaton *)0x0) {
      AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_PlayEffect
                (this_00,AdvancedGhostVisualizaton_Effect__Enum_Respawn,2.0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Type Update(AdvancedGhostBehaviour) */

Type * Assembly-CSharp.dll::AdvancedGhostBehaviour+Dead::AdvancedGhostBehaviour_Dead_Update
                 (AdvancedGhostBehaviour_Dead *this,AdvancedGhostBehaviour *ghostBehaviour,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (ghostBehaviour != (AdvancedGhostBehaviour *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((ghostBehaviour->fields).lives != 0) {
      this_00 = (ghostBehaviour->fields).deathCheckFunc;
      if (this_00 == (Func_1_Boolean_ *)0x0) goto code_?;
      bVar1 = System.Core.dll::System::Func`1[Boolean]::Func_1_Boolean__Invoke
                        (this_00,MethodInfo__System__Func<bool>__Invoke__);
      handle = TypeRef__AdvancedGhostBehaviour__Idle;
      if (bVar1 == 0) {
        if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Type->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__Type);
        }
        pTVar2 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
        return pTVar2;
      }
    }
    this_01 = (Object *)(ghostBehaviour->fields).currentState;
    if (this_01 != (Object *)0x0) {
      pTVar2 = mscorlib.dll::System::Object::Object_GetType(this_01,(MethodInfo *)0x0);
      return pTVar2;
    }
  }
code_?:
  func_?(0);
  pcVar3 = (code *)swi(3);
  pTVar2 = (Type *)(*pcVar3)();
  return pTVar2;
}

