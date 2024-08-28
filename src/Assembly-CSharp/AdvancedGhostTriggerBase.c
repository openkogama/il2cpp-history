
/* Void AddTarget(Collider) */

void Assembly-CSharp.dll::AdvancedGhostTriggerBase::AdvancedGhostTriggerBase_AddTarget
               (AdvancedGhostTriggerBase *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Player);
    cRam_? = '\x01';
  }
  if (other != (Collider *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)other,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      iVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                        (this_00,(MethodInfo *)0x0);
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Player,(MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        t = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)other,(MethodInfo *)0x0);
        this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                            (t,(MethodInfo *)0x0);
        if (this_01 == (MVWorldObjectClient *)0x0) goto code_?;
        x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                      (this_01,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          if ((HashSet_1_System_Int32_ *)t[1].monitor == (HashSet_1_System_Int32_ *)0x0)
          goto code_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
          HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                    ((HashSet_1_System_Int32_ *)t[1].monitor,(this_01->fields)._.id,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
        }
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AdvancedGhostTriggerBase::AdvancedGhostTriggerBase_OnDestroy
               (AdvancedGhostTriggerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
            (this->fields).attackTargets;
  if (this_00 != (HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    HashSet_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType__Clear
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnTriggerStay(Collider) */

void Assembly-CSharp.dll::AdvancedGhostTriggerBase::AdvancedGhostTriggerBase_OnTriggerStay
               (AdvancedGhostTriggerBase *this,Collider *other,MethodInfo *method)

{
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      func_?(&StringLiteral_Player);
      cRam_? = '\x01';
    }
    if ((other == (Collider *)0x0) ||
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)other,(MethodInfo *)0x0), this_01 == (GameObject *)0x0)) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                      (this_01,(MethodInfo *)0x0);
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Player,(MethodInfo *)0x0);
    if (iVar3 == iVar4) {
      t = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                    ((Component *)other,(MethodInfo *)0x0);
      this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                          (t,(MethodInfo *)0x0);
      if (this_02 == (MVWorldObjectClient *)0x0) goto code_?;
      x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                    (this_02,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        this_00 = (this->fields).attackTargets;
        if (this_00 == (HashSet_1_System_Int32_ *)0x0) goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
        HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                  (this_00,(this_02->fields)._.id,
                   MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      }
    }
  }
  return;
}


/* Boolean TryGetValidWorldObjectID(Collider, Int32 ByRef) */

bool Assembly-CSharp.dll::AdvancedGhostTriggerBase::
     AdvancedGhostTriggerBase_TryGetValidWorldObjectID
               (AdvancedGhostTriggerBase *this,Collider *collider,int32_t *woID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Player);
    cRam_? = '\x01';
  }
  *woID = -1;
  if (collider != (Collider *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)collider,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      iVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                        (this_00,(MethodInfo *)0x0);
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Player,(MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        t = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)collider,(MethodInfo *)0x0);
        this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                            (t,(MethodInfo *)0x0);
        if (this_01 == (MVWorldObjectClient *)0x0) goto code_?;
        x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                      (this_01,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          *woID = (this_01->fields)._.id;
          return 1;
        }
      }
      return 0;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* AdvancedGhostTriggerBase() */

void Assembly-CSharp.dll::AdvancedGhostTriggerBase::AdvancedGhostTriggerBase__ctor
               (AdvancedGhostTriggerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  ppHVar1 = &(this->fields).attackTargets;
  *ppHVar1 = this_00;
  func_?(ppHVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Int32[] get_AttackTargets() */

Int32__Array *
Assembly-CSharp.dll::AdvancedGhostTriggerBase::AdvancedGhostTriggerBase_get_AttackTargets
          (AdvancedGhostTriggerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Int32__MethodInfo__System__Linq__Enumerable__ToArray<int>_System__Collections__Generic__IEnumerable<int>_____
                   );
    cRam_? = '\x01';
  }
  pIVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray
                     ((IEnumerable_1_System_Int32_ *)(this->fields).attackTargets,
                      System__Int32__MethodInfo__System__Linq__Enumerable__ToArray<int>_System__Collections__Generic__IEnumerable<int>_____
                     );
  return pIVar1;
}

