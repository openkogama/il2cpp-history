
/* Void ShowChatBubble(String, Int32, ChatAnchor) */

void Assembly-CSharp.dll::ChatBubbleController::ChatBubbleController_ShowChatBubble
               (ChatBubbleController *this,String *text,int32_t anchorId,
               ChatAnchor *chatBubbleAnchor,MethodInfo *method)

{
  key = anchorId;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_00,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    pDVar2 = (this->fields).chatBubbleList;
    if (pDVar2 != (Dictionary_2_System_Int32_ChatBubble_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__ContainsKey
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,anchorId,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__ContainsKey_int_
                        );
      if (bVar1 == 0) {
        if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
          func_?();
        }
        this_01 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
        if (this_01 == (PrefabPool *)0x0) goto code_?;
        pCVar3 = PrefabPool::PrefabPool_get_ChatBubble(this_01,(MethodInfo *)0x0);
        anchorId = unaff_EDI;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          chatBubbleAnchor = (ChatAnchor *)TypeInfo__UnityEngine__Object;
          anchorId = (int32_t)&UNK_?;
          func_?();
        }
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                            ((XpBoostParticlePreviewer *)pCVar3,
                             ChatBubble_MethodInfo__UnityEngine__Object__Instantiate<ChatBubble>_ChatBubble_
                            );
        if (this_02 == (XpBoostParticlePreviewer *)0x0) goto code_?;
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this_02,(MethodInfo *)0x0);
        p = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
        if (pTVar4 == (Transform *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                  (pTVar4,p,(MethodInfo *)0x0);
        pDVar2 = (this->fields).chatBubbleList;
        if (pDVar2 == (Dictionary_2_System_Int32_ChatBubble_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,key,(Object *)this_02,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__Add_int__ChatBubble_
                  );
        pDVar5 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields).chatBubbleList;
        if ((pDVar5 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                        *)0x0) ||
           (pCVar3 = (ChatBubble *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                     Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                               (pDVar5,key,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                               ), chatBubbleAnchor == (ChatAnchor *)0x0)) goto code_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)pCVar3,(Object_1 *)pCVar3,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          (chatBubbleAnchor->fields).AttachedBubble = pCVar3;
          if (pCVar3 == (ChatBubble *)0x0) goto code_?;
          (pCVar3->fields).anchor = chatBubbleAnchor;
          (chatBubbleAnchor->fields).snapTracking = 1;
        }
      }
      pDVar5 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                *)(this->fields).chatBubbleList;
      if ((pDVar5 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                      *)0x0) &&
         (pTVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                             (pDVar5,anchorId,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                             ), pTVar6 != (TerrainUtility_TerrainMap *)0x0)) {
        if (*(char *)&pTVar6[2].klass != '\0') {
          pDVar5 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                    *)(this->fields).chatBubbleList;
          if ((pDVar5 == (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                          *)0x0) ||
             (pCVar3 = (ChatBubble *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                       Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                 (pDVar5,anchorId,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__get_Item_int_
                                 ), pCVar3 == (ChatBubble *)0x0)) goto code_?;
          ChatBubble::ChatBubble_BindMessageValue(pCVar3,(String *)&UNK_?,(MethodInfo *)0x0);
        }
        pDVar5 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                  *)(this->fields).chatBubbleList;
        if (((pDVar5 != (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                         *)0x0) &&
            (pCVar3 = (ChatBubble *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__get_Item
                                (pDVar5,anchorId,
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ChatBubbleController::ChatBubbleController_Start
               (ChatBubbleController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__ChatBubbleManager->static_fields->OnShowChatBubble;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<System::String,_int,_ChatAnchor>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__ChatBubbleController__ShowChatBubble_System__String__int__ChatAnchor_,
             MethodInfo__System__Action<System::String,_int,_ChatAnchor>__Action_System__Object__void__
            );
  pAVar2 = (Action_3_String_Int32_ChatAnchor_ *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar1 = (Action_3_String_Int32_ChatAnchor_ *)0x0;
  if (pAVar2 != (Action_3_String_Int32_ChatAnchor_ *)0x0) {
    if (pAVar2->klass == TypeInfo__System__Action<System::String,_int,_ChatAnchor>) {
      pAVar1 = pAVar2;
    }
    if (pAVar1 == (Action_3_String_Int32_ChatAnchor_ *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TypeInfo__ChatBubbleManager->static_fields->OnShowChatBubble = pAVar1;
  this_01 = (Dictionary_2_System_Int32_ChatBubble_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_ChatBubble>__Dictionary__);
  (this->fields).chatBubbleList = this_01;
  return;
}

