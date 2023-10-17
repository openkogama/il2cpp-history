
/* Void ShowChatBubble(String, Int32, ChatAnchor) */

void Assembly-CSharp.dll::ChatBubbleController::ChatBubbleController_ShowChatBubble
               (ChatBubbleController *this,String *text,int32_t anchorId,
               ChatAnchor *chatBubbleAnchor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__Add_int__ChatBubble_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                   );
    func_?(&
                    ChatBubble_MethodInfo__UnityEngine__Object__Instantiate<ChatBubble>_ChatBubble__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_02 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_02,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
              (this->fields).chatBubbleList;
    if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Object,GUILoginHandler+PlanetData]::
              Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                        (this_00,(Object *)anchorId,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__ContainsKey_int_
                        );
      if (bVar1 == 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar2 == (PrefabPool *)0x0) goto code_?;
        pCVar3 = (pPVar2->fields).chatBubble;
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                           ((Object *)pCVar3,pTVar4,1,
                            ChatBubble_MethodInfo__UnityEngine__Object__Instantiate<ChatBubble>_ChatBubble__UnityEngine__Transform__bool_
                           );
        this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).chatBubbleList;
        if (this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_01,(Object *)anchorId,pOVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__Add_int__ChatBubble_
                  );
        pDVar6 = (this->fields).chatBubbleList;
        if ((pDVar6 == (Dictionary_2_System_Int32_ChatBubble_ *)0x0) ||
           (y = (Object_1 *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,anchorId,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                          ), chatBubbleAnchor == (ChatAnchor *)0x0)) goto code_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pCVar3 = (chatBubbleAnchor->fields).AttachedBubble;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar7 = (ChatBubble *)&UNK_?;
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pCVar3,y,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          (chatBubbleAnchor->fields).AttachedBubble = pCVar7;
          func_?();
          pCVar3 = (chatBubbleAnchor->fields).AttachedBubble;
          if (pCVar3 == (ChatBubble *)0x0) goto code_?;
          (pCVar3->fields).anchor = chatBubbleAnchor;
          func_?();
          (chatBubbleAnchor->fields).snapTracking = 1;
        }
      }
      pDVar6 = (this->fields).chatBubbleList;
      if ((pDVar6 != (Dictionary_2_System_Int32_ChatBubble_ *)0x0) &&
         (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,anchorId,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                             ), pOVar5 != (Object *)0x0)) {
        if (*(char *)&pOVar5[7].klass != '\0') {
          pDVar6 = (this->fields).chatBubbleList;
          if ((pDVar6 == (Dictionary_2_System_Int32_ChatBubble_ *)0x0) ||
             (pCVar3 = (ChatBubble *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,anchorId,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                                 ), pCVar3 == (ChatBubble *)0x0)) goto code_?;
          ChatBubble::ChatBubble_BindMessageValue(pCVar3,(String *)pDVar6,(MethodInfo *)0x0);
        }
        pDVar6 = (this->fields).chatBubbleList;
        if (((pDVar6 != (Dictionary_2_System_Int32_ChatBubble_ *)0x0) &&
            (pCVar3 = (ChatBubble *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar6,anchorId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                                ), pCVar3 != (ChatBubble *)0x0)) &&
           (pTVar4 = (Transform *)ChatBubble::ChatBubble_get_rectTransform(pCVar3,(MethodInfo *)0x0)
           , pTVar4 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                    (pTVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ChatBubbleController::ChatBubbleController_Start
               (ChatBubbleController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<System::String,_int,_ChatAnchor>);
    func_?(&
                    MethodInfo__ChatBubbleController__ShowChatBubble_System__String__int__ChatAnchor_
                   );
    func_?(&TypeInfo__ChatBubbleManager);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__ChatBubbleManager->static_fields->OnShowChatBubble;
  this_00 = (Action_3_Object_Int32_Object_ *)
            func_?(TypeInfo__System__Action<System::String,_int,_ChatAnchor>);
  if (this_00 != (Action_3_Object_Int32_Object_ *)0x0) {
    mscorlib.dll::System::Action`3[Object,Int32,Object]::Action_3_Object_Int32_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__ChatBubbleController__ShowChatBubble_System__String__int__ChatAnchor_,
               (MethodInfo *)0x0);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar2 == (Delegate *)0x0) {
      TypeInfo__ChatBubbleManager->static_fields->OnShowChatBubble =
           (Action_3_String_Int32_ChatAnchor_ *)0x0;
    }
    else {
      pAVar1 = (Action_3_String_Int32_ChatAnchor_ *)func_?();
      if (pAVar1 == (Action_3_String_Int32_ChatAnchor_ *)0x0) goto code_?;
      TypeInfo__ChatBubbleManager->static_fields->OnShowChatBubble = pAVar1;
      iVar3 = func_?();
      if (iVar3 == 0) goto code_?;
    }
    func_?();
    this_01 = (Dictionary_2_System_Int32_ChatBubble_ *)func_?();
    if (this_01 != (Dictionary_2_System_Int32_ChatBubble_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__Dictionary__
                );
      (this->fields).chatBubbleList = this_01;
      func_?(&(this->fields).chatBubbleList,this_01);
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

