
/* Void InvokeButton() */

void Assembly-CSharp.dll::BackButtonHandler::BackButtonHandler_InvokeButton
               (BackButtonHandler *this,MethodInfo *method)

{
  pIVar1 = in_stack_2;
  this_00 = (this->fields).invokeButton;
  if (this_00 == (Button *)0x0) {
code_?:
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = AvatarMotor::AvatarMotor_get_IsMovementLocked((AvatarMotor *)this_00,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    return;
  }
  this_01 = (HoverCraftMotor *)(this->fields).invokeButton;
  if ((this_01 == (HoverCraftMotor *)0x0) ||
     (pIVar5 = HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(this_01,(MethodInfo *)0x0),
     pIVar5 == (IVehicleCamera *)0x0)) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (*(char *)&(in_stack_2->_0).byval_arg.data != '\0') {
    this_02 = (PersistentCallGroup *)(in_stack_2->_0).namespaze;
    if (this_02 == (PersistentCallGroup *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::PersistentCallGroup::
    PersistentCallGroup_Initialize
              (this_02,(InvokableCallList *)(in_stack_2->_0).name,
               (UnityEventBase *)in_stack_2,(MethodInfo *)0x0);
    *(undefined1 *)&(in_stack_2->_0).byval_arg.data = 0;
  }
  pcVar6 = (in_stack_2->_0).name;
  if (pcVar6 == (char *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (pcVar6[0x14] != '\0') {
    if (*(List_1_UnityEngine_UIVertex_ **)(pcVar6 + 0x10) == (List_1_UnityEngine_UIVertex_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (*(List_1_UnityEngine_UIVertex_ **)(pcVar6 + 0x10),
               MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Clear__
              );
    if (*(List_1_VoxelHit_ **)(pcVar6 + 0x10) == (List_1_VoxelHit_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange
              (*(List_1_VoxelHit_ **)(pcVar6 + 0x10),*(IEnumerable_1_VoxelHit_ **)(pcVar6 + 8),
               MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
              );
    if (*(List_1_VoxelHit_ **)(pcVar6 + 0x10) == (List_1_VoxelHit_ *)0x0) goto code_?;
    in_stack_2 = *(InvokableCall__Class **)(pcVar6 + 0xc);
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange
              (*(List_1_VoxelHit_ **)(pcVar6 + 0x10),(IEnumerable_1_VoxelHit_ *)in_stack_2,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
              );
    pcVar6[0x14] = '\0';
  }
  this_04 = *(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)(pcVar6 + 0x10);
  method = (MethodInfo *)0x0;
  if (this_04 != (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) {
    do {
      while( true ) {
        pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_04,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Count__
                           );
        if ((int)pOVar7 <= (int)method) {
          return;
        }
        pIVar8 = (InvokableCall *)
                 mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           (this_04,(int32_t)method,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                           );
        if (pIVar8 == (InvokableCall *)0x0) break;
        bVar9 = (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment;
        if (((pIVar8->klass->_1).naturalAligment < bVar9) ||
           (pIVar1 = in_stack_2,
           (pIVar8->klass->_1).typeHierarchy[bVar9 - 1] !=
           (Il2CppClass *)TypeInfo__UnityEngine__Events__InvokableCall)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        this_03 = (InvokableCall *)0x0;
        if (bVar10) {
          this_03 = pIVar8;
        }
        if (this_03 == (InvokableCall *)0x0) break;
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                  (this_03,(MethodInfo *)0x0);
        method = (MethodInfo *)((int)&method->methodPointer + 1);
      }
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
      IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                (this_04,(int32_t)method,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                );
      in_stack_2 = TypeInfo__UnityEngine__Events__InvokableCall;
      this_03 = (InvokableCall *)func_?();
      if (this_03 != (InvokableCall *)0x0) goto code_?;
      pIVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          (this_04,(int32_t)method,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                          );
      iVar12._0_2_ = (pIVar1->_0).byval_arg.attrs;
      iVar12._2_1_ = (pIVar1->_0).byval_arg.type;
      iVar12._3_1_ = (pIVar1->_0).byval_arg.field_0x7;
      if (iVar12 == 0) {
        uVar13 = func_?();
        (pIVar1->_0).byval_arg.attrs = (short)uVar13;
        (pIVar1->_0).byval_arg.type = (char)((uint)uVar13 >> 0x10);
        (pIVar1->_0).byval_arg.field_0x7 = (char)((uint)uVar13 >> 0x18);
      }
      if (pIVar11 == (IEventSystemHandler *)0x0) break;
      this_04 = *(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)
                 &(pIVar1->_0).byval_arg.attrs;
      func_?(4);
      method = (MethodInfo *)((int)&method->methodPointer + 1);
    } while( true );
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::BackButtonHandler::BackButtonHandler_OnDisable
               (BackButtonHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__BackButtonManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__BackButtonManager);
  }
  pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
  if (pLVar1 != (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Count__
                       );
    index = (undefined1 *)((int)&pOVar2[-1].monitor + 3);
    while( true ) {
      if ((int)index < 1) {
        return;
      }
      if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__BackButtonManager);
      }
      pLVar1 = TypeInfo__BackButtonManager->static_fields->subscribers;
      if ((pLVar1 == (List_1_BackButtonManager_BackButtonSubscriber_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                              (int32_t)index,
                              MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) goto code_?;
      x = pIVar3[1].klass;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        ((Object_1 *)x,(Object_1 *)this,(MethodInfo *)0x0);
      if (bVar4 != 0) break;
      index = index + -1;
    }
    if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = (List_1_MVPlayer_ *)TypeInfo__BackButtonManager->static_fields->subscribers;
    if (this_00 != (List_1_MVPlayer_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
                (this_00,(int32_t)index,
                 MethodInfo__System__Collections__Generic__List<BackButtonManager::BackButtonSubscriber>__RemoveAt_int_
                );
      return;
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::BackButtonHandler::BackButtonHandler_OnEnable
               (BackButtonHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  state = (this->fields).onKeyState;
  button = (this->fields).kogamaControl;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__BackButtonHandler__InvokeButton__,(MethodInfo *)0x0)
  ;
  if ((((uint)(TypeInfo__BackButtonManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BackButtonManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__BackButtonManager);
  }
  BackButtonManager::BackButtonManager_Subscribe
            (this,button,state,(UnityAction *)this_00,(MethodInfo *)0x0);
  return;
}


/* BackButtonHandler() */

void Assembly-CSharp.dll::BackButtonHandler::BackButtonHandler__ctor
               (BackButtonHandler *this,MethodInfo *method)

{
  (this->fields).kogamaControl = 0x2a;
  (this->fields).onKeyState = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

