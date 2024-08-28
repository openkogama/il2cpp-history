
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
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,bubbleId,
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
        this_02 = (this_01->_0).element_class;
        if (element != (RectTransform *)0x0) {
          item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)element,(MethodInfo *)0x0);
          if (this_02 != (Il2CppClass *)0x0) {
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
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,bubbleId,
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
        this_02 = (this_01->_0).element_class;
        if (element != (RectTransform *)0x0) {
          item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)element,(MethodInfo *)0x0);
          if (this_02 != (Il2CppClass *)0x0) {
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
  pDVar1 = (this->fields).textBubbles;
  if (pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,bubbleId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      return;
    }
    pDVar1 = (this->fields).textBubbles;
    if ((pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
       (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,bubbleId,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           ), pOVar3 != (Object *)0x0)) {
      pOVar3[1].klass = (Object__Class *)0x0;
      pDVar1 = (this->fields).textBubbles;
      if (pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
        pTVar4 = (TextBubbleController_BubbleTracker *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,bubbleId,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           );
        TextBubbleController_UpdateBubble(this,pTVar4,(MethodInfo *)0x0);
        pDVar1 = (this->fields).textBubbles;
        if (((pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
            (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,bubbleId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                ), pOVar3 != (Object *)0x0)) &&
           (pOVar3[2].klass != (Object__Class *)0x0)) {
          TextBubble::TextBubble_OnRemoved((TextBubble *)pOVar3[2].klass,(MethodInfo *)0x0);
          pDVar1 = (this->fields).textBubbles;
          if ((pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
             (pTVar4 = (TextBubbleController_BubbleTracker *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,bubbleId,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                 ), pTVar4 != (TextBubbleController_BubbleTracker *)0x0)) {
            TextBubbleController+BubbleTracker::TextBubbleController_BubbleTracker_Clear
                      (pTVar4,(MethodInfo *)0x0);
            pDVar1 = (this->fields).textBubbles;
            if (pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Remove
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,bubbleId,
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
  pDVar1 = (this->fields).textBubbles;
  if (pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,bubbleId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      return;
    }
    pDVar1 = (this->fields).textBubbles;
    if ((pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
       (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,bubbleId,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           ), pOVar3 != (Object *)0x0)) {
      pOVar3[1].klass = (Object__Class *)(this->fields).bubbleLifeTime;
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  uVar1 = (this->fields).currentBubbleId;
  uVar2 = (ulonglong)uVar1;
  (this->fields).currentBubbleId = uVar1 + 1;
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_Show_bubble_2d_,pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  pTVar4 = (this->fields).textBubblePrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pTVar4 = (TextBubble *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pTVar4,
                      TextBubble_MethodInfo__UnityEngine__Object__Instantiate<TextBubble>_TextBubble_
                     );
  iVar5 = 0;
  if (content != (List_1_UnityEngine_RectTransform_ *)0x0) {
    for (; iVar5 < (content->fields)._size; iVar5 = iVar5 + 1) {
      original = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            content,iVar5,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                           );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pTVar6 = (Transform *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)original,
                          UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                         );
      if (pTVar4 == (TextBubble *)0x0) goto code_?;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pTVar6 == (Transform *)0x0) goto code_?;
      this_03 = (List_1_System_Object_ *)0x0;
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar6,(MethodInfo *)0x0);
      if (this_03 == (List_1_System_Object_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                (this_03,(Object *)pGVar7,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Add_UnityEngine__Object_
                );
      if (cRam_? == '\0') {
        this = (TextBubbleController *)&TypeInfo__UnityEngine__RectTransform;
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (pTVar4->fields).bubble;
      if (this_00 == (LayoutGroup *)0x0) goto code_?;
      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
      parent = (Transform *)0x0;
      if (pTVar8 != (Transform *)0x0) {
        if (pTVar8->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          parent = pTVar8;
        }
        if (parent == (Transform *)0x0) goto code_?;
      }
      uVar2 = 0;
      iVar5 = 0;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar6,parent,0,(MethodInfo *)0x0);
    }
    if (pTVar4 != (TextBubble *)0x0) {
      (pTVar4->fields).centerPoint.x = targetCenterPoint.x;
      (pTVar4->fields).bubbleId = (int32_t)uVar2;
      (pTVar4->fields).centerPoint.y = targetCenterPoint.y;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)parentTransform,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar9 == 0) {
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar4,(MethodInfo *)0x0);
        if (pGVar7 == (GameObject *)0x0) goto code_?;
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar7,(MethodInfo *)0x0);
        parentTransform =
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
        if (pTVar6 == (Transform *)0x0) goto code_?;
        content._0_1_ = 0;
      }
      else {
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar4,(MethodInfo *)0x0);
        if (pGVar7 == (GameObject *)0x0) goto code_?;
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar7,(MethodInfo *)0x0);
        if (pTVar6 == (Transform *)0x0) goto code_?;
        content._0_1_ = 1;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar6,parentTransform,(bool)content,(MethodInfo *)0x0);
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar4,(MethodInfo *)0x0);
      if (pGVar7 != (GameObject *)0x0) {
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar7,(MethodInfo *)0x0);
        if (pTVar6 != (Transform *)0x0) {
          pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                              ((Vector3 *)&stack0xffffffd8,pTVar6,(MethodInfo *)0x0);
          uVar11 = pVVar10->x;
          uVar12 = pVVar10->y;
          fVar13 = (float)uVar11 / (float)(uVar11 & _UNK_?);
          fVar14 = (float)uVar12 / (float)(uVar12 & _UNK_?);
          fVar15 = pVVar10->z / (float)((uint)pVVar10->z & _UNK_?);
          pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar4,(MethodInfo *)0x0);
          if (pGVar7 != (GameObject *)0x0) {
            pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar7,(MethodInfo *)0x0);
            if (pTVar6 != (Transform *)0x0) {
              value.y = fVar14;
              value.x = fVar13;
              value.z = fVar15;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar6,value,(MethodInfo *)0x0);
              pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pTVar4,(MethodInfo *)0x0);
              if (pGVar7 != (GameObject *)0x0) {
                pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_get_transform(pGVar7,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if (pTVar6 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                            (pTVar6,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                             (MethodInfo *)0x0);
                  pTVar6 = (Transform *)(pTVar4->fields).tail;
                  if (pTVar6 != (Transform *)0x0) {
                    uVar2 = CONCAT44(pTVar4,&UNK_?);
                    value_00.z = 0.0;
                    value_00.x = (float)&UNK_?;
                    value_00.y = (float)pTVar4;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                              (pTVar6,value_00,(MethodInfo *)0x0);
                    key.m_value = (int32_t)uVar2;
                    TextBubble::TextBubble_RecalcPositionWithScreenCollision
                              (pTVar4,(MethodInfo *)0x0);
                    this_01 = pDRam00000020;
                    key_00.m_value = key.m_value;
                    pOVar16 = (Object *)func_?();
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                              (pOVar16,ExceptionArgument__Enum_obj,in_stack_17);
                    if (this_01 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__Add
                                (this_01,key.m_value,pOVar16,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Add_int__TextBubbleController__BubbleTracker_
                                );
                      if (pDRam00000020 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                        this_02 = (TextBubbleController_BubbleTracker *)
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32,System::Object]::
                                  Dictionary_2_System_Int32_System_Object__get_Item
                                            (pDRam00000020,key_00.m_value,
                                             MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                            );
                        if (this_02 != (TextBubbleController_BubbleTracker *)0x0) {
                          TextBubbleController+BubbleTracker::
                          TextBubbleController_BubbleTracker_set_Bubble
                                    (this_02,pTVar4,(MethodInfo *)0x0);
                          if (pDRam00000020 != (Dictionary_2_System_Int32_System_Object_ *)0x0) {
                            pOVar16 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32,System::Object]::
                                      Dictionary_2_System_Int32_System_Object__get_Item
                                                (pDRam00000020,key_00.m_value,
                                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                                );
                            if (pOVar16 != (Object *)0x0) {
                              pOVar16[1].monitor = (MonitorData *)0x0;
                              if (pDRam00000020 != (Dictionary_2_System_Int32_System_Object_ *)0x0)
                              {
                                pOVar16 = mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32,System::Object]::
                                          Dictionary_2_System_Int32_System_Object__get_Item
                                                    (pDRam00000020,key_00.m_value,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                                  );
                                if (pOVar16 != (Object *)0x0) {
                                  pOVar16[1].klass = (Object__Class *)&UNK_?;
                                  return key_00.m_value;
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
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  iVar19 = (*pcVar18)();
  return iVar19;
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
    (*this_00->klass[1].vtable.GetHashCode.methodPtr)
              (this_00,text,this_00->klass[1].vtable.GetHashCode.method);
    content = (List_1_UnityEngine_RectTransform_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__List<UnityEngine::RectTransform>
                             );
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)content,
               MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__List__);
    item = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                     (this_00,(MethodInfo *)0x0);
    if (content != (List_1_UnityEngine_RectTransform_ *)0x0) {
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
  method_00 = (MethodInfo *)(this->fields).textBubbles;
  if (method_00 != (MethodInfo *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_7,(Dictionary_2_System_UInt32_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_9._dictionary = pDVar6->_dictionary;
    DStack_9._version = pDVar6->_version;
    DStack_9._index = pDVar6->_index;
    DStack_9._current.key = (pDVar6->_current).key;
    DStack_9._16_8_ = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_9;
    while (bVar11 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             (&DStack_9,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TextBubbleController::BubbleTracker>__MoveNext__
                             ), bVar11 != 0) {
      uStack_12 = DStack_9._current.key;
      bVar11 = TextBubbleController_UpdateBubble
                        (this,(TextBubbleController_BubbleTracker *)DStack_9._current.value,
                         (MethodInfo *)0x0);
      if (bVar11 != 0) {
        method_00 = (MethodInfo *)(this->fields).removeList;
        if (method_00 == (MethodInfo *)0x0) goto code_?;
        func_?(method_00,uStack_12);
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_9,
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
            (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar14,(int32_t)RVar16
                                  ,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                 ), pOVar17 == (Object *)0x0)) ||
           (pOVar18 = pOVar17[2].klass, pOVar18 == (Object__Class *)0x0)) goto code_?;
        if (cRam_? == '\0') {
          DStack_7._index = (int32_t)&TypeInfo__UnityEngine__Debug;
          DStack_7._version = (int32_t)&UNK_?;
          func_?();
          DStack_7._version = (int32_t)&StringLiteral_OnRemoved;
          DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)&UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_OnRemoved,(MethodInfo *)0x0);
        (pOVar18->_0).parent = (Il2CppClass *)0xffffffff;
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
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar14,(int32_t)RVar16,
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
    fVar2 = (bubble->fields).currentLifeTime;
    fVar3 = (this->fields).bubbleFadeIn;
    fVar1 = fVar1 / (this->fields).bubbleLifeTime;
    if (fVar2 <= fVar3) {
      fVar1 = fVar2 / fVar3;
    }
    pTVar4 = (bubble->fields).bubble;
    if ((pTVar4 != (TextBubble *)0x0) &&
       (this_00 = (pTVar4->fields).fadeGroup, this_00 != (CanvasGroup *)0x0)) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,fVar1,(MethodInfo *)0x0);
      if (0.0 < (bubble->fields).timeToLive) {
        return 0;
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Time_out,(MethodInfo *)0x0);
      return 1;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
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
      (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)this_00,bubbleId,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                          ), pOVar1 != (Object *)0x0)) &&
     (pOVar2 = pOVar1[2].klass, pOVar2 != (Object__Class *)0x0)) {
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
    index_00 = 0;
    pIVar3 = (pOVar2->_0).element_class;
    while (pIVar3 != (Il2CppClass *)0x0) {
      if ((int)pIVar3->namespaze <= index_00) {
        pIVar3 = (pOVar2->_0).element_class;
        if (pIVar3 != (Il2CppClass *)0x0) {
          length = pIVar3->namespaze;
          (pIVar3->byval_arg).data.dummy = (void *)((int)&((pIVar3->byval_arg).data.type)->data + 1)
          ;
          pIVar3->namespaze = (char *)0x0;
          if (0 < (int)length) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)pIVar3->name,0,(int32_t)length,(MethodInfo *)0x0);
          }
          index = (List_1_UnityEngine_RectTransform_ *)0x0;
          if (content != (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
        }
        break;
      }
      if (pIVar3 == (Il2CppClass *)0x0) break;
      RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)pIVar3
                         ,index_00,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__get_Item_int_
                        );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)RVar4,(MethodInfo *)0x0);
      index_00 = index_00 + 1;
      pIVar3 = (pOVar2->_0).element_class;
    }
  }
code_?:
  func_?();
  pTVar5 = extraout_ECX;
code_?:
  func_?(pTVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
code_?:
  if ((((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)content)->fields)._size
      <= (int)index) {
    return;
  }
  RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                    ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)content,
                     (int32_t)index,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                    );
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_02 = (Transform *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)RVar4,
                       UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                      );
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar3 = (pOVar2->_0).element_class;
  if ((this_02 == (Transform *)0x0) ||
     (item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_02,(MethodInfo *)0x0), pIVar3 == (Il2CppClass *)0x0))
  goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
            ((List_1_System_Object_ *)pIVar3,(Object *)item,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Add_UnityEngine__Object_
            );
  content = index;
  if (cRam_? == '\0') {
    content = (List_1_UnityEngine_RectTransform_ *)&TypeInfo__UnityEngine__RectTransform;
    func_?();
    cRam_? = '\x01';
  }
  this_01 = (Component *)(pOVar2->_0).byval_arg.data.typeHandle;
  if (this_01 == (Component *)0x0) goto code_?;
  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     (this_01,(MethodInfo *)0x0);
  parent = (Transform *)0x0;
  if (pTVar5 != (Transform *)0x0) {
    if (pTVar5->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      parent = pTVar5;
    }
    if (parent == (Transform *)0x0) goto code_?;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
            (this_02,parent,0,(MethodInfo *)0x0);
  index = (List_1_UnityEngine_RectTransform_ *)&UNK_?;
  goto code_?;
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
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,bubbleId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                       );
    if ((pOVar2 != (Object *)0x0) && (pOVar3 = pOVar2[2].klass, pOVar3 != (Object__Class *)0x0)) {
      (pOVar3->_0).castClass = (Il2CppClass *)targetCenterPoint.x;
      (pOVar3->_0).parent = (Il2CppClass *)bubbleId;
      (pOVar3->_0).declaringType = (Il2CppClass *)targetCenterPoint.y;
      pDVar1 = (this->fields).textBubbles;
      if (pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,bubbleId,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           );
        if ((pOVar2 != (Object *)0x0) && (pOVar3 = pOVar2[2].klass, pOVar3 != (Object__Class *)0x0))
        {
          this_00 = *(Transform **)&(pOVar3->_0).byval_arg.attrs;
          if (this_00 != (Transform *)0x0) {
            value.z = 0.0;
            value._0_8_ = anchoredPosition;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (this_00,value,(MethodInfo *)0x0);
            TextBubble::TextBubble_RecalcPositionWithScreenCollision
                      ((TextBubble *)pOVar3,(MethodInfo *)0x0);
            return;
          }
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
                       ((Vector3 *)&stack0xffffffe8,pCVar1,worldPosition,(MethodInfo *)0x0);
    if (pVVar2->z <= 0.0) {
      return;
    }
    method_00 = pVVar2->x;
    uVar3 = pVVar2->y;
    screenSpacePos.z = pVVar2->z;
    screenSpacePos.x = (float)method_00;
    screenSpacePos.y = (float)uVar3;
    TextBubbleController_CalculateOffSet
              ((Vector3 *)&stack0xffffffd0,this,offset,screenSpacePos,(MethodInfo *)method_00);
    pCVar1 = (this->fields).mainCamera;
    if (pCVar1 != (Camera *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                         ((Vector3 *)&stack0xffffffd0,pCVar1,worldPosition,(MethodInfo *)0x0);
      uVar4 = pVVar2->x;
      uVar5 = pVVar2->y;
      pIVar6 = (Il2CppClass *)((float)uVar4 * _UNK_?);
      worldPosition.z = (float)uVar5 * _UNK_?;
      if (cRam_? == '\0') {
        worldPosition.z =
             (float)&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
        ;
        func_?();
        cRam_? = '\x01';
      }
      this_02 = (this->fields).textBubbles;
      if (((this_02 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
          (iVar7 = bubbleId,
          pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)this_02,bubbleId,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                             ), pOVar8 != (Object *)0x0)) &&
         (pOVar9 = pOVar8[2].klass, pOVar9 != (Object__Class *)0x0)) {
        (pOVar9->_0).castClass = pIVar6;
        (pOVar9->_0).parent = (Il2CppClass *)bubbleId;
        (pOVar9->_0).declaringType = (Il2CppClass *)worldPosition.z;
        this_00 = (this->fields).textBubbles;
        if (((this_00 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
            (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)this_00,bubbleId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                ), pOVar8 != (Object *)0x0)) &&
           ((pOVar9 = pOVar8[2].klass, pOVar9 != (Object__Class *)0x0 &&
            (this_01 = *(Transform **)&(pOVar9->_0).byval_arg.attrs, this_01 != (Transform *)0x0))))
        {
          value.y = (float)this_02;
          value.x = (float)iVar7;
          value.z = 0.0;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (this_01,value,(MethodInfo *)0x0);
          TextBubble::TextBubble_RecalcPositionWithScreenCollision
                    ((TextBubble *)pOVar9,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Dictionary__
            );
  ppDVar1 = &(this->fields).textBubbles;
  *ppDVar1 = (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)this_00;
  func_?(ppDVar1,this_00);
  this_01 = (List_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  ppLVar2 = &(this->fields).removeList;
  *ppLVar2 = this_01;
  func_?(ppLVar2,this_01);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

