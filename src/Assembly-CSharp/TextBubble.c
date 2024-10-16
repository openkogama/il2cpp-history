
/* Void Add(RectTransform) */

void Assembly-CSharp.dll::TextBubble::TextBubble_Add
               (TextBubble *this,RectTransform *transformContent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Add_UnityEngine__Object_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).content;
  if (transformContent != (RectTransform *)0x0) {
    item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)transformContent,(MethodInfo *)0x0);
    if (this_00 != (List_1_UnityEngine_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,(Object *)item,
                 MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Add_UnityEngine__Object_
                );
      parent = (Transform *)TextBubble_get_BubbleTransform(this,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                ((Transform *)transformContent,parent,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Single CalculatePivotNearEdgeOffset(Single) */

float Assembly-CSharp.dll::TextBubble::TextBubble_CalculatePivotNearEdgeOffset
                (TextBubble *this,float pivot,MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = (float)(int)((uint)(_UNK_? < pivot) * 2 + -1);
  fVar3 = (pivot - _UNK_?) * fStack_2;
  if (_UNK_? < fVar3) {
    this_00 = (this->fields).tail;
    if (this_00 == (RectTransform *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      fVar5 = (float10)(*pcVar4)();
      return (float)fVar5;
    }
    pRVar6 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                       (&RStack_7,this_00,(MethodInfo *)0x0);
    fStack_1 = (_UNK_? / fVar3) * pRVar6->m_Height * fStack_2;
  }
  return fStack_1;
}


/* Void ClearContent() */

void Assembly-CSharp.dll::TextBubble::TextBubble_ClearContent(TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Clear__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pLVar2 = (this->fields).content;
  do {
    if (pLVar2 == (List_1_UnityEngine_Object_ *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).content;
    if ((pLVar2->fields)._size <= iVar1) {
      if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        iVar1 = (this_00->fields)._size;
        piVar4 = &(this_00->fields)._version;
        *piVar4 = *piVar4 + 1;
        (this_00->fields)._size = 0;
        if (0 < iVar1) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(this_00->fields)._items,0,iVar1,(MethodInfo *)0x0);
        }
        return;
      }
      goto code_?;
    }
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    obj = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                    (this_00,iVar1,
                     MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__get_Item_int_
                    );
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    pLVar2 = (this->fields).content;
    iVar1 = iVar1 + 1;
  } while( true );
}


/* Void Initialize(Vector2, Int32) */

void Assembly-CSharp.dll::TextBubble::TextBubble_Initialize
               (TextBubble *this,Vector2 center,int32_t bubbleId,MethodInfo *method)

{
  (this->fields).bubbleId = bubbleId;
  (this->fields).centerPoint.x = center.x;
  (this->fields).centerPoint.y = center.y;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TextBubble::TextBubble_OnDestroy(TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__TextBubble___OnDestroy_b__16_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&StringLiteral_Bubble_not_removed_from_controll);
    cRam_? = '\x01';
  }
  if ((this->fields).bubbleId != -1) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Bubble_not_removed_from_controll,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
               MethodInfo__TextBubble___OnDestroy_b__16_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
              );
  }
  return;
}


/* Void OnRemoved() */

void Assembly-CSharp.dll::TextBubble::TextBubble_OnRemoved(TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_OnRemoved);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_OnRemoved,(MethodInfo *)0x0);
  (this->fields).bubbleId = -1;
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::TextBubble::TextBubble_OnValidate(TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__RectTransform);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  if (pTVar1 == (Transform *)0x0) {
    func_?();
    pRVar2 = extraout_ECX;
  }
  else {
    pTVar3 = (Transform *)0x0;
    if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar3 = pTVar1;
    }
    pRVar2 = TypeInfo__UnityEngine__RectTransform;
    if (pTVar3 != (Transform *)0x0) {
      pTVar3 = (Transform *)0x0;
      if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
        pTVar3 = pTVar1;
      }
      UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_anchoredPosition
                ((RectTransform *)pTVar3,
                 (Vector2)((ulonglong)
                           (uint)(TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y <<
                          0x20),(MethodInfo *)0x0);
      return;
    }
  }
  func_?(pTVar1,pRVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RecalcPositionAndSize(Int32) */

void Assembly-CSharp.dll::TextBubble::TextBubble_RecalcPositionAndSize
               (TextBubble *this,int32_t inside,MethodInfo *method)

{
  fVar1 = (this->fields).centerPoint.x * _UNK_?;
  fVar2 = (this->fields).centerPoint.y * _UNK_?;
  pTVar3 = (Transform *)(this->fields).tail;
  if (pTVar3 == (Transform *)0x0) goto code_?;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffd8,pTVar3,(MethodInfo *)0x0);
  uVar5 = pVVar4->x;
  uVar6 = pVVar4->y;
  fVar1 = fVar1 - (float)uVar5;
  pTVar3 = (Transform *)(this->fields).tail;
  if ((float)((uint)(fVar2 - (float)uVar6) & _UNK_?) < (float)((uint)fVar1 & _UNK_?))
  {
    iVar7 = (uint)(fVar1 <= 0.0) * 2 + -1;
    if (pTVar3 == (Transform *)0x0) goto code_?;
    value_02.y = 0.0;
    value_02.z = 0.0;
    value_02.x = (float)iVar7;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_up
              (pTVar3,value_02,(MethodInfo *)0x0);
    pTVar3 = (Transform *)(this->fields).tail;
    if (pTVar3 == (Transform *)0x0) goto code_?;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd8,pTVar3,(MethodInfo *)0x0);
    fVar1 = pVVar4->y;
    iVar8 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    TextBubble_CalculatePivotNearEdgeOffset(this,fVar1 / (float)iVar8,(MethodInfo *)0x0);
    pRVar9 = (this->fields).tail;
    if (pRVar9 == (RectTransform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
              ((Rect *)&stack0xffffffc8,pRVar9,(MethodInfo *)0x0);
    fVar1 = 0.0;
    puVar10 = &UNK_?;
    pRVar9 = TextBubble_get_BubbleTransform(this,(MethodInfo *)0x0);
    if (pRVar9 == (RectTransform *)0x0) goto code_?;
    value.y = (float)puVar10;
    value.x = (float)(iVar7 < 1);
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
              (pRVar9,value,(MethodInfo *)0x0);
    this_00 = (Transform *)TextBubble_get_BubbleTransform(this,(MethodInfo *)0x0);
    pTVar3 = (Transform *)(this->fields).tail;
    if (pTVar3 == (Transform *)0x0) goto code_?;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                        ((Vector3 *)&stack0xffffffd8,pTVar3,(MethodInfo *)0x0);
    uVar11 = pVVar4->x;
    uVar12 = pVVar4->y;
    fVar2 = (float)uVar11 + 3.624139e-29;
    fVar1 = (float)uVar12 + fVar1;
  }
  else {
    if (pTVar3 == (Transform *)0x0) goto code_?;
    auVar13._4_8_ = 0;
    auVar13._0_4_ = (float)(int)((uint)(fVar2 - (float)uVar6 <= 0.0) * 2 + -1);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_up
              (pTVar3,(Vector3)(auVar13 << 0x20),(MethodInfo *)0x0);
    pTVar3 = (Transform *)(this->fields).tail;
    if (pTVar3 == (Transform *)0x0) goto code_?;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd8,pTVar3,(MethodInfo *)0x0);
    fVar2 = pVVar4->x;
    iVar8 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    TextBubble_CalculatePivotNearEdgeOffset(this,fVar2 / (float)iVar8,(MethodInfo *)0x0);
    pRVar9 = (this->fields).tail;
    if (pRVar9 == (RectTransform *)0x0) goto code_?;
    __return_storage_ptr__ = (Rect *)&stack0xffffffc8;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
              (__return_storage_ptr__,pRVar9,(MethodInfo *)0x0);
    pRVar9 = (this->fields).tail;
    if (pRVar9 == (RectTransform *)0x0) goto code_?;
    puVar10 = &UNK_?;
    pRVar14 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_rect
                        ((Rect *)&stack0xffffffc8,pRVar9,(MethodInfo *)0x0);
    fVar1 = pRVar14->m_Height * 0.0;
    pRVar9 = TextBubble_get_BubbleTransform(this,(MethodInfo *)0x0);
    if (pRVar9 == (RectTransform *)0x0) goto code_?;
    value_00.y = 1.0;
    value_00.x = (float)puVar10;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
              (pRVar9,value_00,(MethodInfo *)0x0);
    this_00 = (Transform *)TextBubble_get_BubbleTransform(this,(MethodInfo *)0x0);
    pTVar3 = (Transform *)(this->fields).tail;
    if (pTVar3 == (Transform *)0x0) goto code_?;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                        ((Vector3 *)&stack0xffffffd8,pTVar3,(MethodInfo *)0x0);
    uVar15 = pVVar4->x;
    uVar16 = pVVar4->y;
    fVar2 = (float)uVar15 + (float)__return_storage_ptr__;
    fVar1 = (float)uVar16 + fVar1;
  }
  if (this_00 != (Transform *)0x0) {
    value_01.y = fVar1;
    value_01.x = fVar2;
    value_01.z = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (this_00,value_01,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void RecalcPositionWithScreenCollision() */

void Assembly-CSharp.dll::TextBubble::TextBubble_RecalcPositionWithScreenCollision
               (TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  TextBubble_RecalcPositionAndSize(this,1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
  fourCornersArray = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
  this_00 = TextBubble_get_BubbleTransform(this,(MethodInfo *)0x0);
  if (this_00 != (RectTransform *)0x0) {
    fVar1 = 0.0;
    pVVar2 = fourCornersArray;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetWorldCorners
              (this_00,fourCornersArray,(MethodInfo *)0x0);
    if (fourCornersArray != (Vector3__Array *)0x0) {
      if (fourCornersArray->max_length != 0) {
        uVar3 = fourCornersArray->vector[0].x;
        uVar4 = fourCornersArray->vector[0].y;
        if ((((0.0 <= (float)uVar3) && ((float)uVar3 < fVar1 + 0.0)) && (0.0 <= (float)uVar4)) &&
           ((float)uVar4 < (float)pVVar2 + 0.0)) {
          if (fourCornersArray->max_length < 2) goto code_?;
          uVar5 = fourCornersArray->vector[1].x;
          uVar6 = fourCornersArray->vector[1].y;
          if (((0.0 <= (float)uVar5) && ((float)uVar5 < fVar1 + 0.0)) &&
             ((0.0 <= (float)uVar6 && ((float)uVar6 < (float)pVVar2 + 0.0)))) {
            if (fourCornersArray->max_length < 3) goto code_?;
            uVar7 = fourCornersArray->vector[2].x;
            uVar8 = fourCornersArray->vector[2].y;
            if (((0.0 <= (float)uVar7) && ((float)uVar7 < fVar1 + 0.0)) &&
               ((0.0 <= (float)uVar8 && ((float)uVar8 < (float)pVVar2 + 0.0)))) {
              if (fourCornersArray->max_length < 4) goto code_?;
              uVar9 = fourCornersArray->vector[3].x;
              uVar10 = fourCornersArray->vector[3].y;
              if ((((0.0 <= (float)uVar9) && ((float)uVar9 < fVar1 + 0.0)) && (0.0 <= (float)uVar10)
                  ) && ((float)uVar10 < (float)pVVar2 + 0.0)) {
                return;
              }
            }
          }
        }
        TextBubble_RecalcPositionAndSize(this,-1,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetTransparancy(Single) */

void Assembly-CSharp.dll::TextBubble::TextBubble_SetTransparancy
               (TextBubble *this,float a,MethodInfo *method)

{
  this_00 = (this->fields).fadeGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,a,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TextBubble::TextBubble_Start(TextBubble *this,MethodInfo *method)

{
  this_00 = (this->fields).fadeGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,0.0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <OnDestroy>b__16_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::TextBubble::TextBubble__OnDestroy_b__16_0
               (TextBubble *this,TextBubbleController *x,BaseEventData *y,MethodInfo *method)

{
  key = (this->fields).bubbleId;
  if (x != (TextBubbleController *)0x0) {
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
    pDVar1 = (x->fields).textBubbles;
    if (pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]
              ::Dictionary_2_System_Int32_System_Single__ContainsKey
                        ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                        );
      if (bVar2 == 0) {
        return;
      }
      pDVar1 = (x->fields).textBubbles;
      if ((pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                             ), pOVar3 != (Object *)0x0)) {
        pOVar3[1].klass = (Object__Class *)0x0;
        pDVar1 = (x->fields).textBubbles;
        if (pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
          pTVar4 = (TextBubbleController_BubbleTracker *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                             );
          TextBubbleController::TextBubbleController_UpdateBubble(x,pTVar4,(MethodInfo *)0x0);
          pDVar1 = (x->fields).textBubbles;
          if (((pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
              (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,key,
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                  ), pOVar3 != (Object *)0x0)) &&
             (pOVar3[2].klass != (Object__Class *)0x0)) {
            TextBubble_OnRemoved((TextBubble *)pOVar3[2].klass,(MethodInfo *)0x0);
            pDVar1 = (x->fields).textBubbles;
            if ((pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
               (pTVar4 = (TextBubbleController_BubbleTracker *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,key,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                   ), pTVar4 != (TextBubbleController_BubbleTracker *)0x0)) {
              TextBubbleController+BubbleTracker::TextBubbleController_BubbleTracker_Clear
                        (pTVar4,(MethodInfo *)0x0);
              pDVar1 = (x->fields).textBubbles;
              if (pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Remove
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Remove_int_
                          );
                return;
              }
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


/* TextBubble() */

void Assembly-CSharp.dll::TextBubble::TextBubble__ctor(TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Object>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Object_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Object>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__List__);
  (this->fields).content = this_00;
  func_?(&(this->fields).content,this_00);
  (this->fields).bubbleId = -1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* RectTransform get_BubbleTransform() */

RectTransform *
Assembly-CSharp.dll::TextBubble::TextBubble_get_BubbleTransform(TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).bubble;
  if (this_00 == (LayoutGroup *)0x0) {
    uVar1 = func_?(&puStack_2);
    func_?(uVar1);
    pcVar3 = (code *)swi(3);
    pRVar4 = (RectTransform *)(*pcVar3)();
    return pRVar4;
  }
  pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this_00,(MethodInfo *)0x0);
  pTVar6 = (Transform *)0x0;
  if (pTVar5 != (Transform *)0x0) {
    if (pTVar5->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar6 = pTVar5;
    }
    if (pTVar6 == (Transform *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      pRVar4 = (RectTransform *)(*pcVar3)();
      return pRVar4;
    }
  }
  return (RectTransform *)pTVar6;
}


/* Single get_HorizontalPadding() */

float Assembly-CSharp.dll::TextBubble::TextBubble_get_HorizontalPadding
                (TextBubble *this,MethodInfo *method)

{
  pLVar1 = (this->fields).bubble;
  if ((pLVar1 != (LayoutGroup *)0x0) &&
     (pRVar2 = (pLVar1->fields).m_Padding, pRVar2 != (RectOffset *)0x0)) {
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectOffset::RectOffset_get_left
                      (pRVar2,(MethodInfo *)0x0);
    pLVar1 = (this->fields).bubble;
    if ((pLVar1 != (LayoutGroup *)0x0) &&
       (pRVar2 = (pLVar1->fields).m_Padding, pRVar2 != (RectOffset *)0x0)) {
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectOffset::RectOffset_get_right
                        (pRVar2,(MethodInfo *)0x0);
      return (float)(iVar4 + iVar3);
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Vector2 get_Position() */

Vector2 Assembly-CSharp.dll::TextBubble::TextBubble_get_Position
                  (TextBubble *this,MethodInfo *method)

{
  this_00 = (Transform *)(this->fields).tail;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    VVar3.x = pVVar1->x;
    VVar3.y = pVVar1->y;
    return VVar3;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  VVar3 = (Vector2)(*pcVar4)();
  return VVar3;
}


/* Single get_VerticalPadding() */

float Assembly-CSharp.dll::TextBubble::TextBubble_get_VerticalPadding
                (TextBubble *this,MethodInfo *method)

{
  pLVar1 = (this->fields).bubble;
  if ((pLVar1 != (LayoutGroup *)0x0) &&
     (pRVar2 = (pLVar1->fields).m_Padding, pRVar2 != (RectOffset *)0x0)) {
    iVar3 = UnityEngine.CoreModule.dll::UnityEngine::RectOffset::RectOffset_get_top
                      (pRVar2,(MethodInfo *)0x0);
    pLVar1 = (this->fields).bubble;
    if ((pLVar1 != (LayoutGroup *)0x0) &&
       (pRVar2 = (pLVar1->fields).m_Padding, pRVar2 != (RectOffset *)0x0)) {
      iVar4 = UnityEngine.CoreModule.dll::UnityEngine::RectOffset::RectOffset_get_bottom
                        (pRVar2,(MethodInfo *)0x0);
      return (float)(iVar4 + iVar3);
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Void set_Position(Vector2) */

void Assembly-CSharp.dll::TextBubble::TextBubble_set_Position
               (TextBubble *this,Vector2 value,MethodInfo *method)

{
  this_00 = (Transform *)(this->fields).tail;
  if (this_00 != (Transform *)0x0) {
    value_00.z = 0.0;
    value_00._0_8_ = value;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,value_00,(MethodInfo *)0x0);
    TextBubble_RecalcPositionWithScreenCollision(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

