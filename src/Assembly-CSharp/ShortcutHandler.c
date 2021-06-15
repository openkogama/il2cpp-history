
/* Void Callback() */

void Assembly-CSharp.dll::ShortcutHandler::ShortcutHandler_Callback
               (ShortcutHandler *this,MethodInfo *method)

{
  pIVar1 = in_stack_2;
  this_00 = (HoverCraftMotor *)(this->fields).button;
  if ((this_00 == (HoverCraftMotor *)0x0) ||
     (pIVar3 = HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(this_00,(MethodInfo *)0x0),
     pIVar3 == (IVehicleCamera *)0x0)) {
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (*(char *)&(in_stack_2->_0).byval_arg.data != '\0') {
    this_01 = (PersistentCallGroup *)(in_stack_2->_0).namespaze;
    if (this_01 == (PersistentCallGroup *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::PersistentCallGroup::
    PersistentCallGroup_Initialize
              (this_01,(InvokableCallList *)(in_stack_2->_0).name,
               (UnityEventBase *)in_stack_2,(MethodInfo *)0x0);
    *(undefined1 *)&(in_stack_2->_0).byval_arg.data = 0;
  }
  pcVar5 = (in_stack_2->_0).name;
  if (pcVar5 == (char *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (pcVar5[0x14] != '\0') {
    if (*(List_1_UnityEngine_UIVertex_ **)(pcVar5 + 0x10) == (List_1_UnityEngine_UIVertex_ *)0x0)
    goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (*(List_1_UnityEngine_UIVertex_ **)(pcVar5 + 0x10),
               MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Clear__
              );
    if (*(List_1_VoxelHit_ **)(pcVar5 + 0x10) == (List_1_VoxelHit_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange
              (*(List_1_VoxelHit_ **)(pcVar5 + 0x10),*(IEnumerable_1_VoxelHit_ **)(pcVar5 + 8),
               MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
              );
    if (*(List_1_VoxelHit_ **)(pcVar5 + 0x10) == (List_1_VoxelHit_ *)0x0) goto code_?;
    in_stack_2 = *(InvokableCall__Class **)(pcVar5 + 0xc);
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange
              (*(List_1_VoxelHit_ **)(pcVar5 + 0x10),(IEnumerable_1_VoxelHit_ *)in_stack_2,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::Events::BaseInvokableCall>_
              );
    pcVar5[0x14] = '\0';
  }
  this_03 = *(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)(pcVar5 + 0x10);
  index = 0;
  if (this_03 != (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) {
    do {
      while( true ) {
        iVar6 = index;
        pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_03,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Count__
                           );
        if ((int)pOVar7 <= iVar6) {
          return;
        }
        pIVar8 = (InvokableCall *)
                 mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           (this_03,index,
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
        this_02 = (InvokableCall *)0x0;
        if (bVar10) {
          this_02 = pIVar8;
        }
        if (this_02 == (InvokableCall *)0x0) break;
code_?:
        UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::InvokableCall_Invoke_1
                  (this_02,(MethodInfo *)0x0);
        index = index + 1;
      }
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
      IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                (this_03,index,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                );
      in_stack_2 = TypeInfo__UnityEngine__Events__InvokableCall;
      this_02 = (InvokableCall *)func_?();
      if (this_02 != (InvokableCall *)0x0) goto code_?;
      pIVar11 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         (this_03,index,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                         );
      iVar6._0_2_ = (pIVar1->_0).byval_arg.attrs;
      iVar6._2_1_ = (pIVar1->_0).byval_arg.type;
      iVar6._3_1_ = (pIVar1->_0).byval_arg.field_0x7;
      if (iVar6 == 0) {
        uVar12 = func_?(TypeInfo__System__Object,0);
        (pIVar1->_0).byval_arg.attrs = (short)uVar12;
        (pIVar1->_0).byval_arg.type = (char)((uint)uVar12 >> 0x10);
        (pIVar1->_0).byval_arg.field_0x7 = (char)((uint)uVar12 >> 0x18);
      }
      if (pIVar11 == (IEventSystemHandler *)0x0) break;
      this_03 = *(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)
                 &(pIVar1->_0).byval_arg.attrs;
      func_?(4,pIVar11);
      index = index + 1;
    } while( true );
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ShortcutHandler::ShortcutHandler_OnDestroy
               (ShortcutHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__ShortcutHandler___OnDestroy_m__1_UnityEngine__EventSystems__IShortcutKeyUnRegister__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyUnRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyUnRegister>_
            );
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ShortcutHandler::ShortcutHandler_Reset
               (ShortcutHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (Button *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      UnityEngine__UI__Button_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::UI::Button>__
                     );
  (this->fields).button = pBVar1;
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ShortcutHandler::ShortcutHandler_Start
               (ShortcutHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__ShortcutHandler___Start_m__0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
  return;
}


/* Void <OnDestroy>m__1(IShortcutKeyUnRegister, BaseEventData) */

void Assembly-CSharp.dll::ShortcutHandler::ShortcutHandler__OnDestroy_m__1
               (ShortcutHandler *this,IShortcutKeyUnRegister *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).kogamaControl;
  iVar2 = (this->fields).keyState;
  if (x == (IShortcutKeyUnRegister *)0x0) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = x->klass;
  uVar5 = 0;
  uVar6._0_1_ = (pIVar4->_1).rank;
  uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IShortcutKeyUnRegister) {
        ppMVar7 = &(&x->klass->vtable)[pIVar4->interfaceOffsets[uVar5].offset].UnRegisterShortcutKey
                   .method;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  ppMVar7 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IShortcutKeyUnRegister,0);
code_?:
  (*(code *)*ppMVar7)(x,iVar1,iVar2,ppMVar7[1]);
  return;
}


/* Void <Start>m__0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::ShortcutHandler::ShortcutHandler__Start_m__0
               (ShortcutHandler *this,IShortcutKeyRegister *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).keyState;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,MethodInfo__ShortcutHandler__Callback__,(MethodInfo *)0x0);
  if (x == (IShortcutKeyRegister *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = x->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister) {
        ppMVar6 = &(&x->klass->vtable)[pIVar3->interfaceOffsets[uVar4].offset].RegisterShortcutKey.
                   method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister,0);
code_?:
  (*(code *)*ppMVar6)(x,ppMVar6[1],iVar1,this_00);
  return;
}

