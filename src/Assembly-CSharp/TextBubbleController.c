
/* Void AddElement(Int32, RectTransform) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_AddElement
               (TextBubbleController *this,int32_t bubbleId,RectTransform *element,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).textBubbles;
  if (this_00 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,bubbleId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                       );
    if ((pOVar1 != (Object *)0x0) && (pOVar1[2].klass != (Object__Class *)0x0)) {
      TextBubble::TextBubble_Add((TextBubble *)pOVar1[2].klass,element,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    if ((pOVar1 != (Object *)0x0) && (pOVar1[2].klass != (Object__Class *)0x0)) {
      TextBubble::TextBubble_Add((TextBubble *)pOVar1[2].klass,element,(MethodInfo *)0x0);
      if (element != (RectTransform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsFirstSibling
                  ((Transform *)element,(MethodInfo *)0x0);
        return;
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
  IStack_1.m_value = (this->fields).currentBubbleId;
  piVar2 = &(this->fields).currentBubbleId;
  *piVar2 = *piVar2 + 1;
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
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
  index = 0;
  if (content != (List_1_UnityEngine_RectTransform_ *)0x0) {
    for (; index < (content->fields)._size; index = index + 1) {
      original = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            content,index,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                           );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      transformContent =
           (RectTransform *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
      if (pTVar4 == (TextBubble *)0x0) goto code_?;
      TextBubble::TextBubble_Add(pTVar4,transformContent,(MethodInfo *)0x0);
    }
    if (pTVar4 != (TextBubble *)0x0) {
      TextBubble::TextBubble_Initialize(pTVar4,targetCenterPoint,IStack_1.m_value,(MethodInfo *)0x0)
      ;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        this = (TextBubbleController *)&UNK_?;
        func_?();
      }
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)parentTransform,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar4,(MethodInfo *)0x0);
        if (pGVar6 == (GameObject *)0x0) goto code_?;
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0);
        parentTransform =
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
        if (pTVar7 == (Transform *)0x0) goto code_?;
        content._0_1_ = 0;
      }
      else {
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar4,(MethodInfo *)0x0);
        if (pGVar6 == (GameObject *)0x0) goto code_?;
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0);
        if (pTVar7 == (Transform *)0x0) goto code_?;
        content._0_1_ = 1;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (pTVar7,parentTransform,(bool)content,(MethodInfo *)0x0);
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar4,(MethodInfo *)0x0);
      if (pGVar6 != (GameObject *)0x0) {
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0);
        if (pTVar7 != (Transform *)0x0) {
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                              ((Vector3 *)&stack0xffffffdc,pTVar7,(MethodInfo *)0x0);
          uVar9 = pVVar8->x;
          uVar10 = pVVar8->y;
          fVar11 = (float)uVar9 / (float)(uVar9 & _UNK_?);
          fVar12 = (float)uVar10 / (float)(uVar10 & _UNK_?);
          fVar13 = pVVar8->z / (float)((uint)pVVar8->z & _UNK_?);
          pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar4,(MethodInfo *)0x0);
          if (pGVar6 != (GameObject *)0x0) {
            pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar6,(MethodInfo *)0x0);
            if (pTVar7 != (Transform *)0x0) {
              value.y = fVar12;
              value.x = fVar11;
              value.z = fVar13;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                        (pTVar7,value,(MethodInfo *)0x0);
              pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pTVar4,(MethodInfo *)0x0);
              if (pGVar6 != (GameObject *)0x0) {
                pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar6,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if (pTVar7 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                            (pTVar7,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                             (MethodInfo *)0x0);
                  TextBubble::TextBubble_set_Position
                            (pTVar4,(Vector2)0x103a1463103a1408,(MethodInfo *)0x0);
                  pDVar14 = (this->fields).textBubbles;
                  key.m_value = IStack_1.m_value;
                  pOVar15 = (Object *)func_?();
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            (pOVar15,ExceptionArgument__Enum_obj,in_stack_16);
                  if (pDVar14 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0
                     ) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__Add
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar14,key.m_value,
                               pOVar15,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Add_int__TextBubbleController__BubbleTracker_
                              );
                    pDVar14 = (this->fields).textBubbles;
                    if (pDVar14 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)
                                  0x0) {
                      this_00 = (TextBubbleController_BubbleTracker *)
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32,System::Object]::
                                Dictionary_2_System_Int32_System_Object__get_Item
                                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar14,
                                           IStack_1.m_value,
                                           MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                          );
                      if (this_00 != (TextBubbleController_BubbleTracker *)0x0) {
                        TextBubbleController+BubbleTracker::
                        TextBubbleController_BubbleTracker_set_Bubble
                                  (this_00,pTVar4,(MethodInfo *)0x0);
                        pDVar14 = (this->fields).textBubbles;
                        if (pDVar14 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_
                                       *)0x0) {
                          pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32,System::Object]::
                                    Dictionary_2_System_Int32_System_Object__get_Item
                                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar14,
                                               IStack_1.m_value,
                                               MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                              );
                          if (pOVar15 != (Object *)0x0) {
                            pOVar15[1].monitor = (MonitorData *)0x0;
                            pDVar14 = (this->fields).textBubbles;
                            if (pDVar14 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_
                                           *)0x0) {
                              pOVar15 = mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32,System::Object]::
                                        Dictionary_2_System_Int32_System_Object__get_Item
                                                  ((Dictionary_2_System_Int32_System_Object_ *)
                                                   pDVar14,IStack_1.m_value,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                                  );
                              if (pOVar15 != (Object *)0x0) {
                                pOVar15[1].klass = (Object__Class *)lifeTime;
                                return IStack_1.m_value;
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
  pcVar17 = (code *)swi(3);
  iVar18 = (*pcVar17)();
  return iVar18;
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
      iVar1 = TextBubbleController_ShowBubble3D_1
                        (this,worldPosition,lifeTime,content,parentTransform,(Vector2)0x0,
                         (MethodInfo *)0x0);
      return iVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
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
  }
  method_00 = (MethodInfo *)(this->fields).textBubbles;
  if (method_00 != (MethodInfo *)0x0) {
    pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &pDStack_5,(Dictionary_2_System_UInt32_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__GetEnumerator__
                       );
    uVar6 = *(undefined8 *)&(pDVar4->_current).value;
    uStack_1 = 1;
    uVar7 = (pDVar4->_current).key;
    while (uVar8 = uVar7,
          bVar9 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                             &stack0xffffffbc,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TextBubbleController::BubbleTracker>__MoveNext__
                            ), bVar9 != 0) {
      uVar7 = uVar8;
      bVar9 = TextBubbleController_UpdateBubble
                        (this,(TextBubbleController_BubbleTracker *)uVar6,(MethodInfo *)0x0);
      if (bVar9 != 0) {
        method_00 = (MethodInfo *)(this->fields).removeList;
        if (method_00 == (MethodInfo *)0x0) goto code_?;
        func_?(method_00,uVar8);
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffbc,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TextBubbleController::BubbleTracker>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    pLVar10 = (this->fields).removeList;
    if (pLVar10 != (List_1_System_Int32_ *)0x0) {
      index = (pLVar10->fields)._size;
      while (index = index + -1, -1 < index) {
        pDVar11 = (this->fields).textBubbles;
        pLVar12 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).removeList;
        if ((((pLVar12 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (RVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (pLVar12,index,
                                    MethodInfo__System__Collections__Generic__List<int>__get_Item_int_
                                   ),
                pDVar11 == (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0)) ||
            (pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar11,(int32_t)RVar13,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                ), pOVar14 == (Object *)0x0)) ||
           (pOVar14[2].klass == (Object__Class *)0x0)) goto code_?;
        TextBubble::TextBubble_OnRemoved((TextBubble *)pOVar14[2].klass,(MethodInfo *)0x0);
        pDVar11 = (this->fields).textBubbles;
        pLVar12 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).removeList;
        if (((pLVar12 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
            (RVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar12,index,
                                MethodInfo__System__Collections__Generic__List<int>__get_Item_int_),
            pDVar11 == (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0)) ||
           (this_00 = (TextBubbleController_BubbleTracker *)
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar11,(int32_t)RVar13,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                ), this_00 == (TextBubbleController_BubbleTracker *)0x0))
        goto code_?;
        TextBubbleController+BubbleTracker::TextBubbleController_BubbleTracker_Clear
                  (this_00,(MethodInfo *)0x0);
        pDVar11 = (this->fields).textBubbles;
        pLVar12 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).removeList;
        if ((pLVar12 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (RVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar12,index,
                               MethodInfo__System__Collections__Generic__List<int>__get_Item_int_),
           pDVar11 == (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0))
        goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar11,(int32_t)RVar13,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Remove_int_
                  );
      }
      pLVar10 = (this->fields).removeList;
      if (pLVar10 != (List_1_System_Int32_ *)0x0) {
        piVar15 = &(pLVar10->fields)._version;
        *piVar15 = *piVar15 + 1;
        (pLVar10->fields)._size = 0;
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  uVar16 = func_?();
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
    this_00 = (bubble->fields).bubble;
    if (this_00 != (TextBubble *)0x0) {
      TextBubble::TextBubble_SetTransparancy(this_00,fVar1,(MethodInfo *)0x0);
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
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
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
  if (this_00 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,bubbleId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                       );
    if (pOVar1 != (Object *)0x0) {
      this_01 = pOVar1[2].klass;
      if (this_01 != (Object__Class *)0x0) {
        TextBubble::TextBubble_ClearContent((TextBubble *)this_01,(MethodInfo *)0x0);
        index = 0;
        if (content != (List_1_UnityEngine_RectTransform_ *)0x0) {
          for (; index < (content->fields)._size; index = index + 1) {
            original = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                 ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)content,index,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                                 );
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            transformContent =
                 (RectTransform *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)original,
                            UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                           );
            TextBubble::TextBubble_Add((TextBubble *)this_01,transformContent,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,bubbleId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                       );
    if ((pOVar2 != (Object *)0x0) && (pOVar2[2].klass != (Object__Class *)0x0)) {
      TextBubble::TextBubble_Initialize
                ((TextBubble *)pOVar2[2].klass,targetCenterPoint,bubbleId,(MethodInfo *)0x0);
      pMStack3 =
           MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
      ;
      pDVar1 = (this->fields).textBubbles;
      if (pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,bubbleId,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           );
        if ((pOVar2 != (Object *)0x0) && (pOVar2[2].klass != (Object__Class *)0x0)) {
          value.y = (float)pMStack3;
          value.x = (float)bubbleId;
          TextBubble::TextBubble_set_Position((TextBubble *)pOVar2[2].klass,value,(MethodInfo *)0x0)
          ;
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
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_WorldToScreenPoint_1
                ((Vector3 *)&stack0xffffffd8,pCVar1,worldPosition,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pDVar5 = (this->fields).textBubbles;
      if (((pDVar5 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
          (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,bubbleId,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                              ), pOVar6 != (Object *)0x0)) &&
         (pOVar6[2].klass != (Object__Class *)0x0)) {
        center.y = (float)pDVar5;
        center.x = (float)&UNK_?;
        TextBubble::TextBubble_Initialize
                  ((TextBubble *)pOVar6[2].klass,center,bubbleId,(MethodInfo *)0x0);
        pDVar5 = (this->fields).textBubbles;
        if (((pDVar5 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
            (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,bubbleId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                ), pOVar6 != (Object *)0x0)) &&
           (pOVar6[2].klass != (Object__Class *)0x0)) {
          value.y = fVar4;
          value.x = (float)pCVar1;
          TextBubble::TextBubble_set_Position((TextBubble *)pOVar6[2].klass,value,(MethodInfo *)0x0)
          ;
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  (this->fields).textBubbles =
       (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)this_00;
  func_?(&(this->fields).textBubbles,this_00);
  this_01 = (List_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).removeList = this_01;
  func_?(&(this->fields).removeList,this_01);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

