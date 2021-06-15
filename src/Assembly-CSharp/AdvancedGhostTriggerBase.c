
/* Void AddTarget(Collider) */

void Assembly-CSharp.dll::AdvancedGhostTriggerBase::AdvancedGhostTriggerBase_AddTarget
               (AdvancedGhostTriggerBase *this,Collider *other,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (other != (Collider *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)other,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      iVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                        (this_00,(MethodInfo *)0x0);
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Player,(MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        t = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)other,(MethodInfo *)0x0);
        this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                            (t,(MethodInfo *)0x0);
        if (this_01 == (MVWorldObjectClient *)0x0) goto code_?;
        x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                      (this_01,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          item = (UnityWebRequest *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
          if (t[1].klass == (Transform__Class *)0x0) goto code_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
          UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                    ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)t[1].klass,item,
                     MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
        }
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AdvancedGhostTriggerBase::AdvancedGhostTriggerBase_OnDestroy
               (AdvancedGhostTriggerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)(this->fields).attackTargets;
  if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3__Clear
              (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__Clear__);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((other == (Collider *)0x0) ||
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)other,(MethodInfo *)0x0), this_01 == (GameObject *)0x0))
    {
code_?:
      func_?(0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                      (this_01,(MethodInfo *)0x0);
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Player,(MethodInfo *)0x0);
    if (iVar3 == iVar4) {
      t = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                    ((Component_1 *)other,(MethodInfo *)0x0);
      this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                          (t,(MethodInfo *)0x0);
      if (this_02 == (MVWorldObjectClient *)0x0) goto code_?;
      x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                    (this_02,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        item = (UnityWebRequest *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_02,(MethodInfo *)0x0)
        ;
        this_00 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)(this->fields).attackTargets;
        if (this_00 == (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0)
        goto code_?;
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
        UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                  (this_00,item,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  *woID = -1;
  if (collider != (Collider *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)collider,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      iVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                        (this_00,(MethodInfo *)0x0);
      iVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Player,(MethodInfo *)0x0);
      if (iVar1 == iVar2) {
        t = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)collider,(MethodInfo *)0x0);
        this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                            (t,(MethodInfo *)0x0);
        if (this_01 == (MVWorldObjectClient *)0x0) goto code_?;
        x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                      (this_01,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
          *woID = (int32_t)pIVar4;
          return 1;
        }
      }
      return 0;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar3 = (*pcVar5)();
  return bVar3;
}


/* AdvancedGhostTriggerBase() */

void Assembly-CSharp.dll::AdvancedGhostTriggerBase::AdvancedGhostTriggerBase__ctor
               (AdvancedGhostTriggerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields).attackTargets = (HashSet_1_System_Int32_ *)this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}


/* Int32[] get_AttackTargets() */

Int32__Array *
Assembly-CSharp.dll::AdvancedGhostTriggerBase::AdvancedGhostTriggerBase_get_AttackTargets
          (AdvancedGhostTriggerBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pKVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToArray_9
                     ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)
                      (this->fields).attackTargets,
                      System__Int32__MethodInfo__System__Linq__Enumerable__ToArray<int>_System__Collections__Generic__IEnumerable<int>_____
                     );
  return (Int32__Array *)pKVar1;
}

