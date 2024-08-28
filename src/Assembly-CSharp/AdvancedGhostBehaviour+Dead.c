
/* Void Enter(AdvancedGhostBehaviour) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour+Dead::AdvancedGhostBehaviour_Dead_Enter
               (AdvancedGhostBehaviour_Dead *this,AdvancedGhostBehaviour *ghostBehaviour,
               MethodInfo *method)

{
  if ((ghostBehaviour != (AdvancedGhostBehaviour *)0x0) &&
     (this_00 = (ghostBehaviour->fields).GhostVisualization,
     this_00 != (AdvancedGhostVisualizaton *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
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
  func_?();
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
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Type Update(AdvancedGhostBehaviour) */

Type * Assembly-CSharp.dll::AdvancedGhostBehaviour+Dead::AdvancedGhostBehaviour_Dead_Update
                 (AdvancedGhostBehaviour_Dead *this,AdvancedGhostBehaviour *ghostBehaviour,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__AdvancedGhostBehaviour__Idle);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if (ghostBehaviour != (AdvancedGhostBehaviour *)0x0) {
    if ((ghostBehaviour->fields).lives != 0) {
      pFVar1 = (ghostBehaviour->fields).deathCheckFunc;
      if (pFVar1 == (Func_1_Boolean_ *)0x0) goto code_?;
      cVar2 = (*(pFVar1->fields)._._.invoke_impl)
                        ((pFVar1->fields)._._.method_code,(pFVar1->fields)._._.method);
      handle = TypeRef__AdvancedGhostBehaviour__Idle;
      if (cVar2 == '\0') {
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        pTVar3 = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                           ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
        return pTVar3;
      }
    }
    this_00 = (Object *)(ghostBehaviour->fields).currentState;
    if (this_00 != (Object *)0x0) {
      pTVar3 = mscorlib.dll::System::Object::Object_GetType(this_00,(MethodInfo *)0x0);
      return pTVar3;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pTVar3 = (Type *)(*pcVar4)();
  return pTVar3;
}

