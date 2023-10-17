
/* Void AddElement(Int32, RectTransform) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_AddElement
               (TextBubbleController *this,int32_t bubbleId,RectTransform *element,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).textBubbles;
  if (this_00 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,bubbleId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                       );
    if (pOVar1 != (Object *)0x0) {
      this_01 = pOVar1[2].klass;
      if (this_01 != (Object__Class *)0x0) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Add_UnityEngine__Object_
                         );
          cRam_? = '\x01';
        }
        this_02 = *(List_1_UnityEngine_Object_ **)&(this_01->_0).this_arg.attrs;
        if (element != (RectTransform *)0x0) {
          item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)element,(MethodInfo *)0x0);
          if (this_02 != (List_1_UnityEngine_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this_02,(Object *)item,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Add_UnityEngine__Object_
                      );
            parent = (Transform *)
                     TextBubble::TextBubble_get_BubbleTransform
                               ((TextBubble *)this_01,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      ((Transform *)element,parent,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void AddFirstElement(Int32, RectTransform) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_AddFirstElement
               (TextBubbleController *this,int32_t bubbleId,RectTransform *element,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).textBubbles;
  if (this_00 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,bubbleId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                       );
    if (pOVar1 != (Object *)0x0) {
      this_01 = pOVar1[2].klass;
      if (this_01 != (Object__Class *)0x0) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Add_UnityEngine__Object_
                         );
          cRam_? = '\x01';
        }
        this_02 = *(List_1_UnityEngine_Object_ **)&(this_01->_0).this_arg.attrs;
        if (element != (RectTransform *)0x0) {
          item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)element,(MethodInfo *)0x0);
          if (this_02 != (List_1_UnityEngine_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this_02,(Object *)item,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Add_UnityEngine__Object_
                      );
            parent = (Transform *)
                     TextBubble::TextBubble_get_BubbleTransform
                               ((TextBubble *)this_01,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      ((Transform *)element,parent,0,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                      ((Transform *)element,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Vector3 CalculateOffSet(Vector2, Vector3) */

Vector3 * Assembly-CSharp.dll::TextBubbleController::TextBubbleController_CalculateOffSet
                    (Vector3 *__return_storage_ptr__,TextBubbleController *this,Vector2 offset,
                    Vector3 screenSpacePos,MethodInfo *method)

{
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fVar3 = (float)iVar1 * _UNK_? - screenSpacePos.x;
  fVar4 = (float)iVar2 * _UNK_? - screenSpacePos.y;
  if ((float)((uint)fVar4 & _UNK_?) < (float)((uint)fVar3 & _UNK_?)) {
    fVar4 = _UNK_?;
    if (0.0 <= fVar3) {
      fVar4 = _UNK_?;
    }
    __return_storage_ptr__->y = 0.0;
    __return_storage_ptr__->x = offset.x * fVar4;
    __return_storage_ptr__->z = 0.0;
    return __return_storage_ptr__;
  }
  fVar3 = _UNK_?;
  if (0.0 <= fVar4) {
    fVar3 = _UNK_?;
  }
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->z = 0.0;
  __return_storage_ptr__->y = offset.y * fVar3;
  return __return_storage_ptr__;
}


/* Void ClearBubblesOfTypeImmediately(Int32) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_ClearBubblesOfTypeImmediately
               (TextBubbleController *this,int32_t bubbleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).textBubbles;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)bubbleId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return;
    }
    pDVar2 = (this->fields).textBubbles;
    if ((pDVar2 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
       (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,bubbleId,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           ), pOVar3 != (Object *)0x0)) {
      pOVar3[1].klass = (Object__Class *)0x0;
      pDVar2 = (this->fields).textBubbles;
      if (pDVar2 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
        pTVar4 = (TextBubbleController_BubbleTracker *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,bubbleId,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           );
        TextBubbleController_UpdateBubble(this,pTVar4,(MethodInfo *)0x0);
        pDVar2 = (this->fields).textBubbles;
        if (((pDVar2 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
            (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,bubbleId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                ), pOVar3 != (Object *)0x0)) &&
           (pOVar3[2].klass != (Object__Class *)0x0)) {
          TextBubble::TextBubble_OnRemoved((TextBubble *)pOVar3[2].klass,(MethodInfo *)0x0);
          pDVar2 = (this->fields).textBubbles;
          if ((pDVar2 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
             (pTVar4 = (TextBubbleController_BubbleTracker *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,bubbleId,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                 ), pTVar4 != (TextBubbleController_BubbleTracker *)0x0)) {
            TextBubbleController+BubbleTracker::TextBubbleController_BubbleTracker_Clear
                      (pTVar4,(MethodInfo *)0x0);
            pDVar2 = (this->fields).textBubbles;
            if (pDVar2 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Remove
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,bubbleId,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Remove_int_
                        );
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ClearBubblesWithId(Int32) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_ClearBubblesWithId
               (TextBubbleController *this,int32_t bubbleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).textBubbles;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)bubbleId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return;
    }
    this_01 = (this->fields).textBubbles;
    if ((this_01 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,bubbleId,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           ), pOVar2 != (Object *)0x0)) {
      pOVar2[1].klass = (Object__Class *)(this->fields).bubbleLifeTime;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Int32 ShowBubble2D(Vector2, Vector2, Single, List`1[UnityEngine.RectTransform], Transform) */

int32_t Assembly-CSharp.dll::TextBubbleController::TextBubbleController_ShowBubble2D
                  (TextBubbleController *this,Vector2 anchoredPosition,Vector2 targetCenterPoint,
                  float lifeTime,List_1_UnityEngine_RectTransform_ *content,
                  Transform *parentTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__TextBubbleController__BubbleTracker);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Add_int__TextBubbleController__BubbleTracker_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                   );
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
    func_?(&TextBubble_MethodInfo__UnityEngine__Object__Instantiate<TextBubble>_TextBubble_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Show_bubble_2d_);
    cRam_? = '\x01';
  }
  key.m_value = (this->fields).currentBubbleId;
  piVar1 = &(this->fields).currentBubbleId;
  *piVar1 = *piVar1 + 1;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Show_bubble_2d_,pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar2,(MethodInfo *)0x0);
  pTVar3 = (this->fields).textBubblePrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pTVar3 = (TextBubble *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pTVar3,
                      TextBubble_MethodInfo__UnityEngine__Object__Instantiate<TextBubble>_TextBubble_
                     );
  iVar4 = 0;
  if (content != (List_1_UnityEngine_RectTransform_ *)0x0) {
    for (; iVar4 < (content->fields)._size; iVar4 = iVar4 + 1) {
      original = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            content,iVar4,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                           );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar5 = (Transform *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                         );
      if (pTVar3 == (TextBubble *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pTVar5 == (Transform *)0x0) goto code_?;
      this_03 = (List_1_System_Object_ *)0x0;
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar5,(MethodInfo *)0x0);
      if (this_03 == (List_1_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                (this_03,(Object *)pGVar6,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Add_UnityEngine__Object_
                );
      parent = (Transform *)TextBubble::TextBubble_get_BubbleTransform(pTVar3,(MethodInfo *)0x0);
      key.m_value = 0;
      iVar4 = 0;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar5,parent,0,(MethodInfo *)0x0);
    }
    if (pTVar3 != (TextBubble *)0x0) {
      (pTVar3->fields).centerPoint.x = targetCenterPoint.x;
      (pTVar3->fields).bubbleId = key.m_value;
      (pTVar3->fields).centerPoint.y = targetCenterPoint.y;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)parentTransform,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar3,(MethodInfo *)0x0);
        if (pGVar6 == (GameObject *)0x0) goto code_?;
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar6,(MethodInfo *)0x0);
        parentTransform =
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
        if (pTVar5 == (Transform *)0x0) goto code_?;
        content._0_1_ = 0;
      }
      else {
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar3,(MethodInfo *)0x0);
        if (pGVar6 == (GameObject *)0x0) goto code_?;
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar6,(MethodInfo *)0x0);
        if (pTVar5 == (Transform *)0x0) goto code_?;
        content._0_1_ = 1;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar5,parentTransform,(bool)content,(MethodInfo *)0x0);
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar3,(MethodInfo *)0x0);
      if (pGVar6 != (GameObject *)0x0) {
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar6,(MethodInfo *)0x0);
        if (pTVar5 != (Transform *)0x0) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                              ((Vector3 *)&stack0xffffffd8,pTVar5,(MethodInfo *)0x0);
          uVar9 = pVVar8->x;
          uVar10 = pVVar8->y;
          fVar11 = (float)uVar9 / (float)(uVar9 & _UNK_?);
          fVar12 = (float)uVar10 / (float)(uVar10 & _UNK_?);
          fVar13 = pVVar8->z / (float)((uint)pVVar8->z & _UNK_?);
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pTVar3,(MethodInfo *)0x0);
          if (pGVar6 != (GameObject *)0x0) {
            pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar6,(MethodInfo *)0x0);
            if (pTVar5 != (Transform *)0x0) {
              value.y = fVar12;
              value.x = fVar11;
              value.z = fVar13;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar5,value,(MethodInfo *)0x0);
              pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pTVar3,(MethodInfo *)0x0);
              if (pGVar6 != (GameObject *)0x0) {
                pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar6,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if (pTVar5 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                            (pTVar5,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                             (MethodInfo *)0x0);
                  value_00.y = (float)pTVar3;
                  value_00.x = (float)&UNK_?;
                  TextBubble::TextBubble_set_Position(pTVar3,value_00,(MethodInfo *)0x0);
                  this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).textBubbles;
                  key_00.m_value = key.m_value;
                  this_01 = (TweenRunner_1_FloatTween_ *)func_?();
                  if (this_01 != (TweenRunner_1_FloatTween_ *)0x0) {
                    UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::TweenRunner`1[FloatTween]::
                    TweenRunner_1_FloatTween___ctor(this_01,(MethodInfo *)0x0);
                    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__Add
                                (this_00,(Object *)key.m_value,(Object *)this_01,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Add_int__TextBubbleController__BubbleTracker_
                                );
                      pDVar14 = (this->fields).textBubbles;
                      if (pDVar14 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *
                                    )0x0) {
                        this_02 = (TextBubbleController_BubbleTracker *)
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,
                                             key_00.m_value,
                                             MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                            );
                        if (this_02 != (TextBubbleController_BubbleTracker *)0x0) {
                          TextBubbleController+BubbleTracker::
                          TextBubbleController_BubbleTracker_set_Bubble
                                    (this_02,pTVar3,(MethodInfo *)0x0);
                          pDVar14 = (this->fields).textBubbles;
                          if (pDVar14 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_
                                         *)0x0) {
                            pOVar15 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,System::Object]::
                                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                 pDVar14,key_00.m_value,
                                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                                );
                            if (pOVar15 != (Object *)0x0) {
                              pOVar15[1].monitor = (MonitorData *)0x0;
                              pDVar14 = (this->fields).textBubbles;
                              if (pDVar14 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_
                                             *)0x0) {
                                pOVar15 = mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32Enum,System::Object]::
                                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                    ((Dictionary_2_System_Int32Enum_System_Object_ *
                                                     )pDVar14,key_00.m_value,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                                  );
                                if (pOVar15 != (Object *)0x0) {
                                  pOVar15[1].klass = (Object__Class *)&UNK_?;
                                  return (int32_t)(Object *)key_00.m_value;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  iVar17 = (*pcVar16)();
  return iVar17;
}


/* Int32 ShowBubble3D(Vector3, String, Single, Transform, Int32, Boolean, Boolean) */

int32_t Assembly-CSharp.dll::TextBubbleController::TextBubbleController_ShowBubble3D
                  (TextBubbleController *this,Vector3 worldPosition,String *text,float lifeTime,
                  Transform *parentTransform,int32_t bubbleId,bool positionUpdate,bool contentUpdate
                  ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__Add_UnityEngine__RectTransform_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::RectTransform>);
    func_?(&
                    UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  original = (this->fields).textPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_00 = (Graphic *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text_
                      );
  if (this_00 != (Graphic *)0x0) {
    (*(code *)this_00->klass[1].vtable.Finalize.method)
              (this_00,text,this_00->klass[1].vtable.GetHashCode.methodPtr);
    content = (List_1_UnityEngine_RectTransform_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<UnityEngine::RectTransform>
                             );
    if (content != (List_1_UnityEngine_RectTransform_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)content,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__List__)
      ;
      item = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                       (this_00,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)content,(Object *)item,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__Add_UnityEngine__RectTransform_
                );
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector2);
        cRam_? = '\x01';
      }
      fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).x * _UNK_?;
      fVar2 = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).y * _UNK_?;
      pCVar3 = (this->fields).mainCamera;
      if (pCVar3 != (Camera *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                           ((Vector3 *)&stack0xffffffe4,pCVar3,worldPosition,(MethodInfo *)0x0);
        fVar5 = pVVar4->x;
        offset.y = fVar2;
        offset.x = fVar1;
        pVVar4 = TextBubbleController_CalculateOffSet
                           ((Vector3 *)&puStack_6,this,offset,*pVVar4,(MethodInfo *)0x0);
        uVar7 = pVVar4->x;
        uVar8 = pVVar4->y;
        fVar2 = (float)uVar7 + fVar2;
        pCVar3 = (this->fields).mainCamera;
        if (pCVar3 != (Camera *)0x0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                             ((Vector3 *)&puStack_6,pCVar3,worldPosition,(MethodInfo *)0x0);
          uVar9 = pVVar4->x;
          uVar10 = pVVar4->y;
          anchoredPosition.y = (float)uVar8 + fVar5;
          anchoredPosition.x = fVar2;
          targetCenterPoint.y = (float)uVar10 * _UNK_?;
          targetCenterPoint.x = (float)uVar9 * _UNK_?;
          iVar11 = TextBubbleController_ShowBubble2D
                            (this,anchoredPosition,targetCenterPoint,lifeTime,content,
                             parentTransform,(MethodInfo *)0x0);
          return iVar11;
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  iVar11 = (*pcVar12)();
  return iVar11;
}


/* Int32 ShowBubble3D(Vector3, Single, List`1[UnityEngine.RectTransform], Transform, Vector2) */

int32_t Assembly-CSharp.dll::TextBubbleController::TextBubbleController_ShowBubble3D_1
                  (TextBubbleController *this,Vector3 worldPosition,float lifeTime,
                  List_1_UnityEngine_RectTransform_ *content,Transform *parentTransform,
                  Vector2 offset,MethodInfo *method)

{
  pCVar1 = (this->fields).mainCamera;
  if (pCVar1 != (Camera *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                       ((Vector3 *)&stack0xfffffff0,pCVar1,worldPosition,(MethodInfo *)0x0);
    method_00 = pVVar2->x;
    TextBubbleController_CalculateOffSet
              ((Vector3 *)&stack0xffffffd8,this,offset,*pVVar2,(MethodInfo *)method_00);
    pCVar1 = (this->fields).mainCamera;
    if (pCVar1 != (Camera *)0x0) {
      fVar3 = worldPosition.x;
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                ((Vector3 *)&stack0xffffffd8,pCVar1,worldPosition,(MethodInfo *)0x0);
      anchoredPosition.y = fVar3;
      anchoredPosition.x = (float)pCVar1;
      targetCenterPoint.y = lifeTime;
      targetCenterPoint.x = lifeTime;
      iVar4 = TextBubbleController_ShowBubble2D
                        (this,anchoredPosition,targetCenterPoint,lifeTime,
                         (List_1_UnityEngine_RectTransform_ *)0x0,(Transform *)0x0,(MethodInfo *)0x0
                        );
      return iVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  iVar4 = (*pcVar5)();
  return iVar4;
}


/* Void Start() */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_Start
               (TextBubbleController *this,MethodInfo *method)

{
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  (this->fields).mainCamera = pCVar1;
  func_?(pCVar1);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_Update
               (TextBubbleController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TextBubbleController::BubbleTracker>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TextBubbleController::BubbleTracker>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TextBubbleController::BubbleTracker>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_TextBubbleController::BubbleTracker>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_TextBubbleController::BubbleTracker>__get_Value__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  method_00 = (MethodInfo *)(this->fields).textBubbles;
  if (method_00 != (MethodInfo *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__GetEnumerator
                       (&DStack_8,(Dictionary_2_System_Object_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (int32_t)(pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    while (bVar11 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                             (&DStack_6,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TextBubbleController::BubbleTracker>__MoveNext__
                             ), bVar11 != 0) {
      pOStack_12 = (Object *)DStack_6._current.key;
      bVar11 = TextBubbleController_UpdateBubble
                        (this,(TextBubbleController_BubbleTracker *)DStack_6._current.value,
                         (MethodInfo *)0x0);
      if (bVar11 != 0) {
        method_00 = (MethodInfo *)(this->fields).removeList;
        if (method_00 == (MethodInfo *)0x0) goto code_?;
        func_?(method_00,pOStack_12);
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)&DStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TextBubbleController::BubbleTracker>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    pLVar13 = (this->fields).removeList;
    if (pLVar13 != (List_1_System_Int32_ *)0x0) {
      index = (pLVar13->fields)._size;
      while (index = index + -1, -1 < index) {
        pDVar14 = (this->fields).textBubbles;
        pLVar15 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).removeList;
        if ((((pLVar15 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (RVar16 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (pLVar15,index,
                                     MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                    ),
                pDVar14 == (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0)) ||
            (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,
                                  (Int32Enum__Enum)RVar16,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                 ), pOVar17 == (Object *)0x0)) ||
           (pOVar18 = pOVar17[2].klass, pOVar18 == (Object__Class *)0x0)) goto code_?;
        if (cRam_? == '\0') {
          DStack_8._index = (int32_t)&TypeInfo__UnityEngine__Debug;
          DStack_8._version = (int32_t)&UNK_?;
          func_?();
          DStack_8._version = (int32_t)&StringLiteral_OnRemoved;
          DStack_8._dictionary = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_OnRemoved,(MethodInfo *)0x0);
        (pOVar18->_0).declaringType = (Il2CppClass *)0xffffffff;
        pDVar14 = (this->fields).textBubbles;
        pLVar15 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).removeList;
        if (((pLVar15 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
            (RVar16 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (pLVar15,index,
                                 MethodInfo__System__Collections__Generic__List<int>__get_Item_int_)
            , pDVar14 == (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0)) ||
           (this_00 = (TextBubbleController_BubbleTracker *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar14,
                                 (Int32Enum__Enum)RVar16,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                ), this_00 == (TextBubbleController_BubbleTracker *)0x0))
        goto code_?;
        TextBubbleController+BubbleTracker::TextBubbleController_BubbleTracker_Clear
                  (this_00,(MethodInfo *)0x0);
        pDVar14 = (this->fields).textBubbles;
        pLVar15 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).removeList;
        if ((pLVar15 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar16 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar15,index,
                                MethodInfo__System__Collections__Generic__List<int>__get_Item_int_),
           pDVar14 == (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0))
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar14,(int32_t)RVar16,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Remove_int_
                  );
      }
      pLVar13 = (this->fields).removeList;
      if (pLVar13 != (List_1_System_Int32_ *)0x0) {
        piVar19 = &(pLVar13->fields)._version;
        *piVar19 = *piVar19 + 1;
        (pLVar13->fields)._size = 0;
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  uVar20 = func_?();
  func_?(uVar20);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Boolean UpdateBubble(TextBubbleController+BubbleTracker) */

bool Assembly-CSharp.dll::TextBubbleController::TextBubbleController_UpdateBubble
               (TextBubbleController *this,TextBubbleController_BubbleTracker *bubble,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Time_out);
    cRam_? = '\x01';
  }
  if (bubble != (TextBubbleController_BubbleTracker *)0x0) {
    fVar1 = (bubble->fields).currentLifeTime;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (bubble->fields).currentLifeTime = fVar2 + fVar1;
    fVar1 = (bubble->fields).timeToLive;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar1 - fVar2;
    (bubble->fields).timeToLive = fVar1;
    fVar2 = (this->fields).bubbleFadeIn;
    fVar1 = fVar1 / (this->fields).bubbleLifeTime;
    if ((bubble->fields).currentLifeTime <= fVar2) {
      fVar1 = (bubble->fields).currentLifeTime / fVar2;
    }
    pTVar3 = (bubble->fields).bubble;
    if ((pTVar3 != (TextBubble *)0x0) &&
       (this_00 = (pTVar3->fields).fadeGroup, this_00 != (CanvasGroup *)0x0)) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,fVar1,(MethodInfo *)0x0);
      if (0.0 < (bubble->fields).timeToLive) {
        return 0;
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Time_out,(MethodInfo *)0x0);
      return 1;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void UpdateContent(Int32, List`1[UnityEngine.RectTransform]) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_UpdateContent
               (TextBubbleController *this,int32_t bubbleId,
               List_1_UnityEngine_RectTransform_ *content,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                   );
    func_?(&
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).textBubbles;
  if (((this_00 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
      (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,bubbleId,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                          ), pOVar1 != (Object *)0x0)) &&
     (this_01 = pOVar1[2].klass, this_01 != (Object__Class *)0x0)) {
    if (cRam_? == '\0') {
      func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Clear__)
      ;
      func_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__get_Count__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__get_Item_int_
                     );
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    iVar2 = 0;
    pLVar3 = *(List_1_UnityEngine_Object_ **)&(this_01->_0).this_arg.attrs;
    while (pLVar3 != (List_1_UnityEngine_Object_ *)0x0) {
      this_02 = *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                 &(this_01->_0).this_arg.attrs;
      if ((pLVar3->fields)._size <= iVar2) {
        if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          iVar2 = (this_02->fields)._size;
          piVar4 = &(this_02->fields)._version;
          *piVar4 = *piVar4 + 1;
          (this_02->fields)._size = 0;
          if (0 < iVar2) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(this_02->fields)._items,0,iVar2,(MethodInfo *)0x0);
          }
          this = (TextBubbleController *)0x0;
          if (content != (List_1_UnityEngine_RectTransform_ *)0x0) {
            while( true ) {
              if ((content->fields)._size <= (int)this) {
                return;
              }
              RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                  *)content,(int32_t)this,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                                );
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              this_03 = (Transform *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)RVar5,
                                   UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                  );
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pLVar3 = *(List_1_UnityEngine_Object_ **)&(this_01->_0).this_arg.attrs;
              if ((this_03 == (Transform *)0x0) ||
                 (item = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this_03,(MethodInfo *)0x0),
                 pLVar3 == (List_1_UnityEngine_Object_ *)0x0)) break;
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)pLVar3,(Object *)item,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Add_UnityEngine__Object_
                        );
              parent = (Transform *)
                       TextBubble::TextBubble_get_BubbleTransform
                                 ((TextBubble *)this_01,(MethodInfo *)0x0);
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (this_03,parent,0,(MethodInfo *)0x0);
              this = (TextBubbleController *)((int)&this->klass + 1);
            }
          }
        }
        break;
      }
      if (this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      break;
      RVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_02,iVar2,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__get_Item_int_
                        );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)RVar5,(MethodInfo *)0x0);
      iVar2 = iVar2 + 1;
      pLVar3 = *(List_1_UnityEngine_Object_ **)&(this_01->_0).this_arg.attrs;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdatePosition(Int32, Vector2, Vector2) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_UpdatePosition
               (TextBubbleController *this,int32_t bubbleId,Vector2 anchoredPosition,
               Vector2 targetCenterPoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).textBubbles;
  if (pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,bubbleId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                       );
    if ((pOVar2 != (Object *)0x0) && (pOVar3 = pOVar2[2].klass, pOVar3 != (Object__Class *)0x0)) {
      (pOVar3->_0).element_class = (Il2CppClass *)targetCenterPoint.x;
      (pOVar3->_0).declaringType = (Il2CppClass *)bubbleId;
      (pOVar3->_0).castClass = (Il2CppClass *)targetCenterPoint.y;
      pDVar1 = (this->fields).textBubbles;
      if (pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar1,bubbleId,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           );
        if ((pOVar2 != (Object *)0x0) && (pOVar2[2].klass != (Object__Class *)0x0)) {
          TextBubble::TextBubble_set_Position
                    ((TextBubble *)pOVar2[2].klass,(Vector2)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdatePosition3D(Int32, Vector3, Vector2) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_UpdatePosition3D
               (TextBubbleController *this,int32_t bubbleId,Vector3 worldPosition,Vector2 offset,
               MethodInfo *method)

{
  pCVar1 = (this->fields).mainCamera;
  if (pCVar1 != (Camera *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                       ((Vector3 *)&stack0xfffffff0,pCVar1,worldPosition,(MethodInfo *)0x0);
    if (pVVar2->z <= 0.0) {
      return;
    }
    method_00 = pVVar2->x;
    uVar3 = pVVar2->y;
    screenSpacePos.z = pVVar2->z;
    screenSpacePos.x = (float)method_00;
    screenSpacePos.y = (float)uVar3;
    TextBubbleController_CalculateOffSet
              ((Vector3 *)&stack0xffffffd8,this,offset,screenSpacePos,(MethodInfo *)method_00);
    pCVar1 = (this->fields).mainCamera;
    if (pCVar1 != (Camera *)0x0) {
      fVar4 = worldPosition.x;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                         ((Vector3 *)&stack0xffffffd8,pCVar1,worldPosition,(MethodInfo *)0x0);
      uVar5 = pVVar2->x;
      pIVar6 = (Il2CppClass *)((float)uVar5 * _UNK_?);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (Il2CppClass *)(this->fields).textBubbles;
      if (((this_00 != (Il2CppClass *)0x0) &&
          (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,bubbleId,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                              ), pOVar7 != (Object *)0x0)) &&
         (pOVar8 = pOVar7[2].klass, pOVar8 != (Object__Class *)0x0)) {
        (pOVar8->_0).element_class = pIVar6;
        (pOVar8->_0).declaringType = (Il2CppClass *)bubbleId;
        (pOVar8->_0).castClass = this_00;
        this_01 = (this->fields).textBubbles;
        if (((this_01 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
            (pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,bubbleId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                ), pOVar7 != (Object *)0x0)) &&
           (pOVar7[2].klass != (Object__Class *)0x0)) {
          value.y = fVar4;
          value.x = (float)pCVar1;
          TextBubble::TextBubble_set_Position((TextBubble *)pOVar7[2].klass,value,(MethodInfo *)0x0)
          ;
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* TextBubbleController() */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController__ctor
               (TextBubbleController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  (this->fields).bubbleLifeTime = 2.0;
  (this->fields).bubbleFadeIn = 0.2;
  this_00 = (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>
                           );
  if (this_00 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Dictionary__
              );
    (this->fields).textBubbles = this_00;
    func_?(&(this->fields).textBubbles,this_00);
    this_01 = (List_1_System_Int32_ *)
              func_?(TypeInfo__System__Collections__Generic__List<int>);
    if (this_01 != (List_1_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
      (this->fields).removeList = this_01;
      func_?(&(this->fields).removeList,this_01);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
                ((Transform *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

