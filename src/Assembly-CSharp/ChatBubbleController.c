
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
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    pDVar2 = (this->fields).chatBubbleList;
    if (pDVar2 != (Dictionary_2_System_Int32_ChatBubble_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar2,anchorId,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__ContainsKey_int_
                        );
      if (bVar1 == 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar3 == (PrefabPool *)0x0) goto code_?;
        pCVar4 = (pPVar3->fields).chatBubble;
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                           ((Object *)pCVar4,pTVar5,1,
                            ChatBubble_MethodInfo__UnityEngine__Object__Instantiate<ChatBubble>_ChatBubble__UnityEngine__Transform__bool_
                           );
        pDVar2 = (this->fields).chatBubbleList;
        if (pDVar2 == (Dictionary_2_System_Int32_ChatBubble_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,anchorId,pOVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__Add_int__ChatBubble_
                  );
        pDVar2 = (this->fields).chatBubbleList;
        if ((pDVar2 == (Dictionary_2_System_Int32_ChatBubble_ *)0x0) ||
           (y = (Object_1 *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,anchorId,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                          ), chatBubbleAnchor == (ChatAnchor *)0x0)) goto code_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pCVar4 = (chatBubbleAnchor->fields).AttachedBubble;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pCVar7 = (ChatBubble *)&UNK_?;
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pCVar4,y,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          (chatBubbleAnchor->fields).AttachedBubble = pCVar7;
          func_?();
          pCVar4 = (chatBubbleAnchor->fields).AttachedBubble;
          if (pCVar4 == (ChatBubble *)0x0) goto code_?;
          (pCVar4->fields).anchor = chatBubbleAnchor;
          func_?();
          (chatBubbleAnchor->fields).snapTracking = 1;
        }
      }
      pDVar2 = (this->fields).chatBubbleList;
      if ((pDVar2 != (Dictionary_2_System_Int32_ChatBubble_ *)0x0) &&
         (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,anchorId,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                             ), pOVar6 != (Object *)0x0)) {
        if (*(char *)&pOVar6[7].monitor != '\0') {
          pDVar2 = (this->fields).chatBubbleList;
          if ((pDVar2 == (Dictionary_2_System_Int32_ChatBubble_ *)0x0) ||
             (pCVar4 = (ChatBubble *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,anchorId,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                                 ), pCVar4 == (ChatBubble *)0x0)) goto code_?;
          ChatBubble::ChatBubble_BindMessageValue(pCVar4,(String *)pDVar2,(MethodInfo *)0x0);
        }
        pDVar2 = (this->fields).chatBubbleList;
        if (((pDVar2 != (Dictionary_2_System_Int32_ChatBubble_ *)0x0) &&
            (pCVar4 = (ChatBubble *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,anchorId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                                ), pCVar4 != (ChatBubble *)0x0)) &&
           (pTVar5 = (Transform *)ChatBubble::ChatBubble_get_rectTransform(pCVar4,(MethodInfo *)0x0)
           , pTVar5 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                    (pTVar5,(MethodInfo *)0x0);
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
  mscorlib.dll::System::Action`3[Object,Int32,Object]::Action_3_Object_Int32_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__ChatBubbleController__ShowChatBubble_System__String__int__ChatAnchor_,
             (MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__ChatBubbleManager->static_fields->OnShowChatBubble =
         (Action_3_String_Int32_ChatAnchor_ *)0x0;
code_?:
    func_?();
    this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_
               *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::
    Text::TextResourceManager+FontAssetRef]::
    Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__Dictionary__);
    ppDVar3 = &(this->fields).chatBubbleList;
    *ppDVar3 = (Dictionary_2_System_Int32_ChatBubble_ *)this_01;
    func_?(ppDVar3,this_01);
    return;
  }
  pAVar1 = (Action_3_String_Int32_ChatAnchor_ *)func_?();
  if (pAVar1 != (Action_3_String_Int32_ChatAnchor_ *)0x0) {
    TypeInfo__ChatBubbleManager->static_fields->OnShowChatBubble = pAVar1;
    iVar4 = func_?();
    if (iVar4 != 0) goto code_?;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

