
/* Void <>m__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts+<OnRewardedAdWatched>c__AnonStorey1::
     ReviveUIHandlerBoosts_OnRewardedAdWatched_c_AnonStorey1___m__0
               (ReviveUIHandlerBoosts_OnRewardedAdWatched_c_AnonStorey1 *this,IUIStack *x,
               BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).popup;
  if (this_00 != (NotificationPopup *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       ((Component_1 *)this_00,(MethodInfo *)0x0);
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,
               MethodInfo__ReviveUIHandlerBoosts___OnRewardedAdWatched_c__AnonStorey1____m__1__,
               (MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      func_?(1,TypeInfo__UnityEngine__EventSystems__IUIStack,x,pGVar1,1,this_01,0x20);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <>m__1() */

void Assembly-CSharp.dll::ReviveUIHandlerBoosts+<OnRewardedAdWatched>c__AnonStorey1::
     ReviveUIHandlerBoosts_OnRewardedAdWatched_c_AnonStorey1___m__1
               (ReviveUIHandlerBoosts_OnRewardedAdWatched_c_AnonStorey1 *this,MethodInfo *method)

{
  pIVar1 = in_stack_2;
  pRVar3 = (this->fields)._this;
  if (((pRVar3 == (ReviveUIHandlerBoosts *)0x0) ||
      (this_00 = (HoverCraftMotor *)(pRVar3->fields)._.continueButton,
      this_00 == (HoverCraftMotor *)0x0)) ||
     (pIVar4 = HoverCraftMotor::HoverCraftMotor_get_VehicleCamera(this_00,(MethodInfo *)0x0),
     pIVar4 == (IVehicleCamera *)0x0)) {
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
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
  pcVar6 = (in_stack_2->_0).name;
  if (pcVar6 == (char *)0x0) goto code_?;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  this_03 = *(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)(pcVar6 + 0x10);
  index = 0;
  if (this_03 != (List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)0x0) {
    do {
      while( true ) {
        iVar7 = index;
        pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_03,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Count__
                           );
        if ((int)pOVar8 <= iVar7) {
          return;
        }
        pIVar9 = (InvokableCall *)
                 mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           (this_03,index,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                           );
        if (pIVar9 == (InvokableCall *)0x0) break;
        bVar10 = (TypeInfo__UnityEngine__Events__InvokableCall->_1).naturalAligment;
        if (((pIVar9->klass->_1).naturalAligment < bVar10) ||
           (pIVar1 = in_stack_2,
           (pIVar9->klass->_1).typeHierarchy[bVar10 - 1] !=
           (Il2CppClass *)TypeInfo__UnityEngine__Events__InvokableCall)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        this_02 = (InvokableCall *)0x0;
        if (bVar11) {
          this_02 = pIVar9;
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
      pIVar12 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         (this_03,index,
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__get_Item_int_
                         );
      iVar7._0_2_ = (pIVar1->_0).byval_arg.attrs;
      iVar7._2_1_ = (pIVar1->_0).byval_arg.type;
      iVar7._3_1_ = (pIVar1->_0).byval_arg.field_0x7;
      if (iVar7 == 0) {
        uVar13 = func_?(TypeInfo__System__Object,0);
        (pIVar1->_0).byval_arg.attrs = (short)uVar13;
        (pIVar1->_0).byval_arg.type = (char)((uint)uVar13 >> 0x10);
        (pIVar1->_0).byval_arg.field_0x7 = (char)((uint)uVar13 >> 0x18);
      }
      if (pIVar12 == (IEventSystemHandler *)0x0) break;
      this_03 = *(List_1_UnityEngine_EventSystems_IEventSystemHandler_ **)
                 &(pIVar1->_0).byval_arg.attrs;
      func_?(4,pIVar12);
      index = index + 1;
    } while( true );
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

