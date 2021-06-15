
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::FirstTimeActivatablePointerObjectives+<CreateBubble>c__Iterator0::
     FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0_MoveNext
               (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0 *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pFVar1 = this;
  iVar2 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar2 == 0) {
    this_04 = (ScaleAnimationBase *)
              func_?(
                             TypeInfo__FirstTimeActivatablePointerObjectives__CreateBubble_c__Iterator0___CreateBubble_c__AnonStorey1
                             );
    ScaleAnimationBase::ScaleAnimationBase_Play(this_04,0.0,in_stack_3);
    (pFVar1->fields)._locvar0 =
         (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0_CreateBubble_c_AnonStorey1
          *)this_04;
    if (this_04 != (ScaleAnimationBase *)0x0) {
      (this_04->fields).state = (int32_t)pFVar1;
      this = (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0 *)0x0;
      pOVar4 = (Object *)func_?(TypeInfo__System__Int32,&this);
      (pFVar1->fields)._current = pOVar4;
      if ((pFVar1->fields)._disposing == 0) {
        (pFVar1->fields)._PC = 1;
      }
      return 1;
    }
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    pFVar5 = (this->fields)._locvar0;
    if (pFVar5 != (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0_CreateBubble_c_AnonStorey1
                   *)0x0) {
      (pFVar5->fields).target = (RectTransform *)0x0;
      iVar2 = 0;
      pFVar6 = (this->fields)._this;
      if (pFVar6 != (FirstTimeActivatablePointerObjectives *)0x0) {
        while (pLVar7 = (pFVar6->fields).winningConditionTransforms,
              pLVar7 != (List_1_UnityEngine_RectTransform_ *)0x0) {
          pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar7,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                             );
          if ((int)pOVar4 <= iVar2) {
code_?:
            pFVar5 = (pFVar1->fields)._locvar0;
            if (pFVar5 != (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0_CreateBubble_c_AnonStorey1
                           *)0x0) {
              pRVar8 = (pFVar5->fields).target;
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                ((Object_1 *)pRVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
              pFVar6 = (pFVar1->fields)._this;
              if (bVar9 == 0) {
                if (pFVar6 != (FirstTimeActivatablePointerObjectives *)0x0) {
                  this = (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0 *)
                         UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_1_get_gameObject((Component_1 *)pFVar6,(MethodInfo *)0x0);
                  pFVar5 = (pFVar1->fields)._locvar0;
                  this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?(
                                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                                              );
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (this_03,(Object *)pFVar5,
                             MethodInfo__FirstTimeActivatablePointerObjectives__CreateBubble_c__Iterator0___CreateBubble_c__AnonStorey1____m__0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                             ,
                             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>__EventFunction_System__Object__void__
                            );
                  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.
                              methodPtr & 0x2000000) != 0) &&
                     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0))
                  {
                    this = (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0 *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents;
                    func_?();
                  }
                  this = (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0 *)
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                  ;
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy_63
                            ((GameObject *)
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                             ,(BaseEventData *)0x0,
                             (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_03,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                            );
                  (pFVar1->fields)._PC = -1;
                  return 0;
                }
              }
              else if (pFVar6 != (FirstTimeActivatablePointerObjectives *)0x0) {
                FirstTimeActivatablePointerObjectives::FirstTimeActivatablePointerObjectives_Destroy
                          (pFVar6,(MethodInfo *)0x0);
                return 0;
              }
            }
            break;
          }
          pFVar6 = (pFVar1->fields)._this;
          if ((((pFVar6 == (FirstTimeActivatablePointerObjectives *)0x0) ||
               (pLVar7 = (pFVar6->fields).winningConditionTransforms,
               pLVar7 == (List_1_UnityEngine_RectTransform_ *)0x0)) ||
              (this_01 = (Component_1 *)
                         mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                         EventSystems::IEventSystemHandler]::
                         List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                   ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar7,
                                    iVar2,
                                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                                   ), this_01 == (Component_1 *)0x0)) ||
             (this_02 = (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0 *)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_gameObject(this_01,(MethodInfo *)0x0),
             this_02 == (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0 *)0x0))
          break;
          method = (MethodInfo *)0x0;
          this = this_02;
          bVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_get_activeInHierarchy((GameObject *)this_02,(MethodInfo *)0x0);
          pFVar6 = (pFVar1->fields)._this;
          if (bVar9 != 0) {
            pFVar5 = (pFVar1->fields)._locvar0;
            if ((pFVar6 != (FirstTimeActivatablePointerObjectives *)0x0) &&
               (this_00 = (MethodInfo *)(pFVar6->fields).winningConditionTransforms,
               this_00 != (MethodInfo *)0x0)) {
              this = (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0 *)&UNK_?
              ;
              method = this_00;
              pRVar8 = (RectTransform *)
                       mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_00,
                                  iVar2,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                                 );
              if (pFVar5 != (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0_CreateBubble_c_AnonStorey1
                             *)0x0) {
                (pFVar5->fields).target = pRVar8;
                goto code_?;
              }
            }
            break;
          }
          iVar2 = iVar2 + 1;
          if (pFVar6 == (FirstTimeActivatablePointerObjectives *)0x0) break;
        }
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
}


/* Void Reset() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerObjectives+<CreateBubble>c__Iterator0::
     FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0_Reset
               (FirstTimeActivatablePointerObjectives_CreateBubble_c_Iterator0 *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

