
/* Void AddElement(Int32, RectTransform) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_AddElement
               (TextBubbleController *this,int32_t bubbleId,RectTransform *element,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (this->fields).textBubbles;
  if (((this_01 == (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) ||
      (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)this_01,bubbleId,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                          ), pOVar1 == (Object *)0x0)) ||
     (this_02 = (TextBubble *)pOVar1[1].monitor, this_02 == (TextBubble *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Add_UnityEngine__Object_
                  ,element,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this_02->fields).content;
  if ((element != (RectTransform *)0x0) &&
     (item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)element,(MethodInfo *)0x0),
     pMVar3 = 
     MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Add_UnityEngine__Object_,
     this_00 != (List_1_UnityEngine_Object_ *)0x0)) {
    piVar4 = &(this_00->fields)._version;
    *piVar4 = *piVar4 + 1;
    pOVar5 = (this_00->fields)._items;
    if (pOVar5 != (Object_1__Array *)0x0) {
      uVar6 = (this_00->fields)._size;
      if (uVar6 < (uint)pOVar5->max_length) {
        (this_00->fields)._size = uVar6 + 1;
        FUN_?(pOVar5,(longlong)(int)uVar6,item);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)this_00,(Object *)item,
                   pMVar3->klass->rgctx_data[0xe].method);
      }
      pRVar7 = TextBubble::TextBubble_get_BubbleTransform(this_02,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                      ,pRVar7,0,0,unaff_RDI);
        LOCK();
        UNLOCK();
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (element == (RectTransform *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar8 = (element->fields)._._._.m_CachedPtr;
      if (pvVar8 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)element,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      if (pRVar7 == (RectTransform *)0x0) {
        pvVar9 = (void *)0x0;
      }
      else {
        pvVar9 = (pRVar7->fields)._._._.m_CachedPtr;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar8,pvVar9,0);
      return;
    }
  }
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).textBubbles;
  if ((((this_00 == (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) ||
       (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_00,bubbleId,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           ), pOVar1 == (Object *)0x0)) ||
      ((TextBubble *)pOVar1[1].monitor == (TextBubble *)0x0)) ||
     (TextBubble::TextBubble_Add((TextBubble *)pOVar1[1].monitor,element,(MethodInfo *)0x0),
     element == (RectTransform *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (element->fields)._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)element,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3);
  return;
}


/* Vector3 CalculateOffSet(Vector2, Vector3) */

Vector3 * Assembly-CSharp.dll::TextBubbleController::TextBubbleController_CalculateOffSet
                    (Vector3 *__return_storage_ptr__,TextBubbleController *this,Vector2 offset,
                    Vector3 *screenSpacePos,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar1)();
    return pVVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pVVar3 = (Vector3 *)(*pcVar1)();
    return pVVar3;
  }
  pcRam_? = pcVar1;
  uVar5 = screenSpacePos->x;
  uVar6 = screenSpacePos->y;
  fVar7 = (float)iVar4 * _UNK_? - (float)uVar5;
  iVar4 = (*pcRam_?)();
  fVar8 = (float)iVar4 * _UNK_? - (float)uVar6;
  if ((float)((uint)fVar8 & _UNK_?) < (float)((uint)fVar7 & _UNK_?)) {
    fVar8 = _UNK_?;
    if (0.0 <= fVar7) {
      fVar8 = _UNK_?;
    }
    fStack_9 = offset.x;
    __return_storage_ptr__->y = 0.0;
    __return_storage_ptr__->z = 0.0;
    __return_storage_ptr__->x = fStack_9 * fVar8;
  }
  else {
    fVar7 = _UNK_?;
    if (0.0 <= fVar8) {
      fVar7 = _UNK_?;
    }
    fStack_10 = offset.y;
    __return_storage_ptr__->x = 0.0;
    __return_storage_ptr__->z = 0.0;
    __return_storage_ptr__->y = fStack_10 * fVar7;
  }
  return __return_storage_ptr__;
}


/* Void ClearBubblesOfTypeImmediately(Int32) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_ClearBubblesOfTypeImmediately
               (TextBubbleController *this,int32_t bubbleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).textBubbles;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,bubbleId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return;
    }
    pDVar2 = (this->fields).textBubbles;
    if ((pDVar2 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
       (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,bubbleId,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           ), pOVar3 != (Object *)0x0)) {
      pDVar2 = (this->fields).textBubbles;
      *(undefined4 *)&pOVar3[1].klass = 0;
      if (pDVar2 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
        pTVar4 = (TextBubbleController_BubbleTracker *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,bubbleId,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           );
        TextBubbleController_UpdateBubble(this,pTVar4,(MethodInfo *)0x0);
        pDVar2 = (this->fields).textBubbles;
        if (((pDVar2 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
            (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,bubbleId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                ), pOVar3 != (Object *)0x0)) &&
           ((TextBubble *)pOVar3[1].monitor != (TextBubble *)0x0)) {
          TextBubble::TextBubble_OnRemoved((TextBubble *)pOVar3[1].monitor,(MethodInfo *)0x0);
          pDVar2 = (this->fields).textBubbles;
          if ((pDVar2 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
             (pTVar4 = (TextBubbleController_BubbleTracker *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,bubbleId,
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
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ClearBubblesWithId(Int32) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_ClearBubblesWithId
               (TextBubbleController *this,int32_t bubbleId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).textBubbles;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,bubbleId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return;
    }
    this_01 = (this->fields).textBubbles;
    if ((this_01 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
       (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_01,bubbleId,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           ), pOVar2 != (Object *)0x0)) {
      *(float *)&pOVar2[1].klass = (this->fields).bubbleLifeTime;
      return;
    }
  }
  FUN_?();
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
    FUN_?(&TypeInfo__TextBubbleController__BubbleTracker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Add_int__TextBubbleController__BubbleTracker_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TextBubble_MethodInfo__UnityEngine__Object__Instantiate<TextBubble>_TextBubble_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Show_bubble_2d_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).currentBubbleId;
  piVar2 = &(this->fields).currentBubbleId;
  *piVar2 = *piVar2 + 1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar3 = 0;
  auStack_4 = (undefined1  [8])0x0;
  uStack_5._0_4_ = 0;
  uStack_5._4_4_ = 0;
  pSVar6 = mscorlib.dll::System::Number::Number_FormatInt32
                     (iVar1,(ReadOnlySpan_1_Char_ *)auStack_4,(IFormatProvider *)0x0,
                      (MethodInfo *)0x0);
  pSVar6 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_Show_bubble_2d_,pSVar6,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar6,(MethodInfo *)0x0);
  pTVar7 = (this->fields).textBubblePrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar7 = (TextBubble *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pTVar7,
                      TextBubble_MethodInfo__UnityEngine__Object__Instantiate<TextBubble>_TextBubble_
                     );
  uVar8 = 0;
  if (content == (List_1_UnityEngine_RectTransform_ *)0x0) goto DAT_?;
  lVar9 = 0x20;
  for (; (int)uVar8 < (content->fields)._size; uVar8 = uVar8 + 1) {
    if ((uint)(content->fields)._size <= uVar8) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      iVar1 = (*pcVar10)();
      return iVar1;
    }
    pRVar11 = (content->fields)._items;
    if (pRVar11 == (RectTransform__Array *)0x0) goto DAT_?;
    if ((uint)pRVar11->max_length <= uVar8) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      iVar1 = (*pcVar10)();
      return iVar1;
    }
    pOVar12 = *(Object **)((longlong)pRVar11->vector + lVar9 + -0x20);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    transformContent =
         (RectTransform *)
         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                   (pOVar12,
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
    if (pTVar7 == (TextBubble *)0x0) goto DAT_?;
    TextBubble::TextBubble_Add(pTVar7,transformContent,(MethodInfo *)0x0);
    lVar9 = lVar9 + 8;
  }
  if (pTVar7 == (TextBubble *)0x0) goto DAT_?;
  fStack_13 = targetCenterPoint.x;
  fStack_14 = targetCenterPoint.y;
  (pTVar7->fields).centerPoint.x = fStack_13;
  (pTVar7->fields).centerPoint.y = fStack_14;
  (pTVar7->fields).bubbleId = iVar1;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (parentTransform == (Transform *)0x0) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar15 = (pTVar7->fields)._._._._.m_CachedPtr;
    if (pvVar15 == (void *)0x0) goto code_?;
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar10 = (code *)swi(3);
      iVar1 = (*pcVar10)();
      return iVar1;
    }
    pcRam_? = pcVar10;
    pvVar15 = (void *)(*pcRam_?)(pvVar15);
    pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
              Unmarshal_UnmarshalUnityObject
                        (pvVar15,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                        );
    if (pOVar12 == (Object *)0x0) goto DAT_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar16 = pOVar12[1].klass;
    if (pOVar16 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(pOVar12,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      iVar1 = (*pcVar10)();
      return iVar1;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar10 = (code *)swi(3);
      iVar1 = (*pcVar10)();
      return iVar1;
    }
    pcRam_? = pcVar10;
    pvVar15 = (void *)(*pcRam_?)(pOVar16);
    pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
              Unmarshal_UnmarshalUnityObject
                        (pvVar15,
                         UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                        );
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar15 = (this->fields)._._._._.m_CachedPtr;
    if (pvVar15 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      iVar1 = (*pcVar10)();
      return iVar1;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar10 = (code *)swi(3);
      iVar1 = (*pcVar10)();
      return iVar1;
    }
    pcRam_? = pcVar10;
    pvVar15 = (void *)(*pcRam_?)(pvVar15);
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject
              (pvVar15,
               UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
              );
    if (pOVar12 == (Object *)0x0) goto DAT_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar16 = pOVar12[1].klass;
    if (pOVar16 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(pOVar12,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      iVar1 = (*pcVar10)();
      return iVar1;
    }
    if ((
        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?();
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar10 = (code *)swi(3);
      iVar1 = (*pcVar10)();
      return iVar1;
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((parentTransform->fields)._._.m_CachedPtr == (void *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar15 = (pTVar7->fields)._._._._.m_CachedPtr;
    if (pvVar15 == (void *)0x0) goto code_?;
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar10 = (code *)swi(3);
      iVar1 = (*pcVar10)();
      return iVar1;
    }
    pcRam_? = pcVar10;
    pvVar15 = (void *)(*pcRam_?)(pvVar15);
    pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
              Unmarshal_UnmarshalUnityObject
                        (pvVar15,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                        );
    if (pOVar12 == (Object *)0x0) goto DAT_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar16 = pOVar12[1].klass;
    if (pOVar16 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(pOVar12,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      iVar1 = (*pcVar10)();
      return iVar1;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar10 = (code *)swi(3);
      iVar1 = (*pcVar10)();
      return iVar1;
    }
    pcRam_? = pcVar10;
    pvVar15 = (void *)(*pcRam_?)(pOVar16);
    pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
              Unmarshal_UnmarshalUnityObject
                        (pvVar15,
                         UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                        );
    if (pOVar12 == (Object *)0x0) goto DAT_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar16 = pOVar12[1].klass;
    if (pOVar16 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(pOVar12,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      iVar1 = (*pcVar10)();
      return iVar1;
    }
    if ((
        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?();
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar10 = (code *)swi(3);
      iVar1 = (*pcVar10)();
      return iVar1;
    }
  }
  pcRam_? = pcVar10;
  (*pcRam_?)(pOVar16);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar15 = (pTVar7->fields)._._._._.m_CachedPtr;
  if (pvVar15 == (void *)0x0) {
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
    pcVar10 = (code *)swi(3);
    iVar1 = (*pcVar10)();
    return iVar1;
  }
  pcVar10 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar10 = (code *)swi(3);
    iVar1 = (*pcVar10)();
    return iVar1;
  }
  pcRam_? = pcVar10;
  pvVar15 = (void *)(*pcRam_?)(pvVar15);
  pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
            Unmarshal_UnmarshalUnityObject
                      (pvVar15,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                      );
  if (pOVar12 != (Object *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar16 = pOVar12[1].klass;
    if (pOVar16 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(pOVar12,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      iVar1 = (*pcVar10)();
      return iVar1;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar10 = (code *)swi(3);
      iVar1 = (*pcVar10)();
      return iVar1;
    }
    pcRam_? = pcVar10;
    pvVar15 = (void *)(*pcRam_?)(pOVar16);
    pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
              Unmarshal_UnmarshalUnityObject
                        (pvVar15,
                         UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                        );
    if (pOVar12 != (Object *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvStack_17 = (void *)0x0;
      fStack_18 = 0.0;
      pOVar16 = pOVar12[1].klass;
      if (pOVar16 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar12,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        iVar1 = (*pcVar10)();
        return iVar1;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar10 = (code *)swi(3);
        iVar1 = (*pcVar10)();
        return iVar1;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pOVar16);
      auStack_4 = (undefined1  [8])pvStack_17;
      auVar19 = auStack_4;
      auStack_4._4_4_ = (undefined4)((ulonglong)pvStack_17 >> 0x20);
      uVar8 = (uint)_UNK_?;
      fVar20 = pvStack_17._0_4_ / (float)((uint)pvStack_17._0_4_ & uVar8);
      fVar21 = (float)auStack_4._4_4_ / (float)(auStack_4._4_4_ & uVar8);
      fVar22 = fStack_18 / (float)((uint)fStack_18 & uVar8);
      auStack_4 = auVar19;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar15 = (pTVar7->fields)._._._._.m_CachedPtr;
      if (pvVar15 != (void *)0x0) {
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar10 = (code *)swi(3);
          iVar1 = (*pcVar10)();
          return iVar1;
        }
        pcRam_? = pcVar10;
        pvVar15 = (void *)(*pcRam_?)(pvVar15);
        pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar15,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                            );
        if (pOVar12 != (Object *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar16 = pOVar12[1].klass;
          if (pOVar16 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(pOVar12,(MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            iVar1 = (*pcVar10)();
            return iVar1;
          }
          pcVar10 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
            uVar3 = func_?(&UNK_?);
            FUN_?(uVar3,0);
            pcVar10 = (code *)swi(3);
            iVar1 = (*pcVar10)();
            return iVar1;
          }
          pcRam_? = pcVar10;
          pvVar15 = (void *)(*pcRam_?)(pOVar16);
          pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar15,
                               UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                              );
          if (pOVar12 != (Object *)0x0) {
            auStack_4 = (undefined1  [8])CONCAT44(fVar21,fVar20);
            uStack_5._0_4_ = (int32_t)fVar22;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOVar16 = pOVar12[1].klass;
            if (pOVar16 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(pOVar12,(MethodInfo *)0x0);
              pcVar10 = (code *)swi(3);
              iVar1 = (*pcVar10)();
              return iVar1;
            }
            pcVar10 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
              uVar3 = func_?(&UNK_?);
              FUN_?(uVar3,0);
              pcVar10 = (code *)swi(3);
              iVar1 = (*pcVar10)();
              return iVar1;
            }
            pcRam_? = pcVar10;
            (*pcRam_?)(pOVar16);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar15 = (pTVar7->fields)._._._._.m_CachedPtr;
            if (pvVar15 == (void *)0x0) goto code_?;
            pcVar10 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
              uVar3 = func_?(&UNK_?);
              FUN_?(uVar3,0);
              pcVar10 = (code *)swi(3);
              iVar1 = (*pcVar10)();
              return iVar1;
            }
            pcRam_? = pcVar10;
            pvVar15 = (void *)(*pcRam_?)(pvVar15);
            pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                      Unmarshal_UnmarshalUnityObject
                                (pvVar15,
                                 UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                );
            if (pOVar12 != (Object *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pOVar16 = pOVar12[1].klass;
              if (pOVar16 != (Object__Class *)0x0) {
                pcVar10 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                  uVar3 = func_?(&UNK_?);
                  FUN_?(uVar3,0);
                  pcVar10 = (code *)swi(3);
                  iVar1 = (*pcVar10)();
                  return iVar1;
                }
                pcRam_? = pcVar10;
                pvVar15 = (void *)(*pcRam_?)(pOVar16);
                pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                          Unmarshal_UnmarshalUnityObject
                                    (pvVar15,
                                     UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                    );
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (pOVar12 != (Object *)0x0) {
                  pvStack_17 = *(void **)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
                  fStack_18 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pOVar16 = pOVar12[1].klass;
                  if (pOVar16 == (Object__Class *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException(pOVar12,(MethodInfo *)0x0);
                    pcVar10 = (code *)swi(3);
                    iVar1 = (*pcVar10)();
                    return iVar1;
                  }
                  pcVar10 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                    uVar3 = func_?(&UNK_?);
                    FUN_?(uVar3,0);
                    pcVar10 = (code *)swi(3);
                    iVar1 = (*pcVar10)();
                    return iVar1;
                  }
                  pcRam_? = pcVar10;
                  (*pcRam_?)(pOVar16,&pvStack_17);
                  TextBubble::TextBubble_set_Position(pTVar7,anchoredPosition,(MethodInfo *)0x0);
                  pDVar23 = (this->fields).textBubbles;
                  pOVar12 = (Object *)FUN_?(TypeInfo__TextBubbleController__BubbleTracker);
                  if (pDVar23 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0
                     ) {
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar23,iVar1,pOVar12,
                               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Add_int__TextBubbleController__BubbleTracker_
                               ->klass->rgctx_data[0x22].method);
                    pDVar23 = (this->fields).textBubbles;
                    if ((pDVar23 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)
                                   0x0) &&
                       (this_00 = (TextBubbleController_BubbleTracker *)
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32,System::Object]::
                                  Dictionary_2_System_Int32_System_Object__get_Item
                                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar23,
                                             iVar1,
                                             MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                            ), this_00 != (TextBubbleController_BubbleTracker *)0x0)
                       ) {
                      TextBubbleController+BubbleTracker::
                      TextBubbleController_BubbleTracker_set_Bubble
                                (this_00,pTVar7,(MethodInfo *)0x0);
                      pDVar23 = (this->fields).textBubbles;
                      if ((pDVar23 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_
                                      *)0x0) &&
                         (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32,System::Object]::
                                    Dictionary_2_System_Int32_System_Object__get_Item
                                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar23,
                                               iVar1,
                                               MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                              ), pOVar12 != (Object *)0x0)) {
                        *(undefined4 *)((longlong)&pOVar12[1].klass + 4) = 0;
                        pDVar23 = (this->fields).textBubbles;
                        if ((pDVar23 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_
                                        *)0x0) &&
                           (pOVar12 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32,System::Object]::
                                      Dictionary_2_System_Int32_System_Object__get_Item
                                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar23,
                                                 iVar1,
                                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                                ), pOVar12 != (Object *)0x0)) {
                          *(float *)&pOVar12[1].klass = lifeTime;
                          return iVar1;
                        }
                      }
                    }
                  }
                }
                FUN_?();
                pcVar10 = (code *)swi(3);
                iVar1 = (*pcVar10)();
                return iVar1;
              }
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(pOVar12,(MethodInfo *)0x0);
              pcVar10 = (code *)swi(3);
              iVar1 = (*pcVar10)();
              return iVar1;
            }
          }
        }
        FUN_?();
        pcVar10 = (code *)swi(3);
        iVar1 = (*pcVar10)();
        return iVar1;
      }
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      iVar1 = (*pcVar10)();
      return iVar1;
    }
  }
DAT_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  iVar1 = (*pcVar10)();
  return iVar1;
}


/* Int32 ShowBubble3D(Vector3, String, Single, Transform, Int32, Boolean, Boolean) */

int32_t Assembly-CSharp.dll::TextBubbleController::TextBubbleController_ShowBubble3D
                  (TextBubbleController *this,Vector3 *worldPosition,String *text,float lifeTime,
                  Transform *parentTransform,int32_t bubbleId,bool positionUpdate,bool contentUpdate
                  ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__Add_UnityEngine__RectTransform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::RectTransform>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this->fields).textPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (Graphic *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       UnityEngine__UI__Text_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Text>_UnityEngine__UI__Text_
                      );
  if (this_00 != (Graphic *)0x0) {
    (*(code *)this_00->klass[1].vtable.OnEnable.method)
              (this_00,text,this_00->klass[1].vtable.Start.methodPtr);
    content = (List_1_UnityEngine_RectTransform_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::RectTransform>
                           );
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)content,
               MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__List__);
    item = UnityEngine.UI.dll::UnityEngine::UI::Graphic::Graphic_get_rectTransform
                     (this_00,(MethodInfo *)0x0);
    pMVar1 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__Add_UnityEngine__RectTransform_
    ;
    if (content != (List_1_UnityEngine_RectTransform_ *)0x0) {
      piVar2 = &(content->fields)._version;
      *piVar2 = *piVar2 + 1;
      pRVar3 = (content->fields)._items;
      if (pRVar3 != (RectTransform__Array *)0x0) {
        uVar4 = (content->fields)._size;
        if (uVar4 < (uint)pRVar3->max_length) {
          (content->fields)._size = uVar4 + 1;
          FUN_?(pRVar3,(longlong)(int)uVar4,item);
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__AddWithResize
                    ((List_1_System_Object_ *)content,(Object *)item,
                     pMVar1->klass->rgctx_data[0xe].method);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector2);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        aVStack_5[0].z = worldPosition->z;
        aVStack_5[0].x = worldPosition->x;
        aVStack_5[0].y = worldPosition->y;
        offset.y = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).y * _UNK_?;
        offset.x = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).x * _UNK_?;
        iVar6 = TextBubbleController_ShowBubble3D_1
                          (this,aVStack_5,lifeTime,content,parentTransform,offset,(MethodInfo *)0x0
                          );
        return iVar6;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  iVar6 = (*pcVar7)();
  return iVar6;
}


/* Int32 ShowBubble3D(Vector3, Single, List`1[UnityEngine.RectTransform], Transform, Vector2) */

int32_t Assembly-CSharp.dll::TextBubbleController::TextBubbleController_ShowBubble3D_1
                  (TextBubbleController *this,Vector3 *worldPosition,float lifeTime,
                  List_1_UnityEngine_RectTransform_ *content,Transform *parentTransform,
                  Vector2 offset,MethodInfo *method)

{
  pCVar1 = (this->fields).mainCamera;
  uStack_2 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uStack_3 = CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  uStack_4 = CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
  auStack_5._4_4_ = unaff_XMM8_Db;
  auStack_5._0_4_ = unaff_XMM8_Da;
  stack0xffffffffffffffc0 = CONCAT44(unaff_XMM8_Dd,unaff_XMM8_Dc);
  if (pCVar1 == (Camera *)0x0) {
code_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    iVar7 = (*pcVar6)();
    return iVar7;
  }
  VStack_8.x = worldPosition->x;
  VStack_8.y = worldPosition->y;
  VStack_8.z = worldPosition->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_9._0_4_ = 0.0;
  auStack_9._4_4_ = 0.0;
  auStack_9._8_8_ = auStack_9._8_8_ & 0xffffffff00000000;
  pvVar10 = (pCVar1->fields)._._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    iVar7 = (*pcVar6)();
    return iVar7;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar6 = (code *)swi(3);
    iVar7 = (*pcVar6)();
    return iVar7;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar10,&VStack_8,2,auStack_9);
  VStack_8.x = (float)auStack_9._0_4_;
  VStack_8.y = (float)auStack_9._4_4_;
  VStack_8.z = (float)auStack_9._8_4_;
  pVVar12 = TextBubbleController_CalculateOffSet
                     ((Vector3 *)auStack_13,this,offset,&VStack_8,(MethodInfo *)0x0);
  VStack_8.x = pVVar12->x;
  VStack_8.y = pVVar12->y;
  VStack_8.z = pVVar12->z;
  fVar14 = (float)auStack_9._0_4_ + VStack_8.x;
  fVar15 = (float)auStack_9._4_4_ + VStack_8.y;
  pCVar1 = (this->fields).mainCamera;
  if (pCVar1 == (Camera *)0x0) goto code_?;
  VStack_8.x = worldPosition->x;
  VStack_8.y = worldPosition->y;
  VStack_8.z = worldPosition->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_9._0_8_ = 0;
  auStack_9._8_8_ = auStack_9._8_8_ & 0xffffffff00000000;
  pvVar10 = (pCVar1->fields)._._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    iVar7 = (*pcVar6)();
    return iVar7;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar6 = (code *)swi(3);
    iVar7 = (*pcVar6)();
    return iVar7;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar10,&VStack_8,2);
  uVar16 = uStack_3;
  uVar17 = stack0xffffffffffffffc0;
  uVar11 = auStack_5._0_8_;
  fVar18 = (float)auStack_9._0_4_ * TypeRef__System__Activator__T._0_4_;
  value.y = fVar15;
  value.x = fVar14;
  uStack_3 = uStack_2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TextBubbleController__BubbleTracker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Add_int__TextBubbleController__BubbleTracker_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TextBubble_MethodInfo__UnityEngine__Object__Instantiate<TextBubble>_TextBubble_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Show_bubble_2d_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar7 = (this->fields).currentBubbleId;
  piVar19 = &(this->fields).currentBubbleId;
  *piVar19 = *piVar19 + 1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar20 = 0;
  auStack_21 = (undefined1  [8])0x0;
  uStack_22._0_4_ = 0;
  uStack_22._4_4_ = 0;
  pSVar23 = mscorlib.dll::System::Number::Number_FormatInt32
                      (iVar7,(ReadOnlySpan_1_Char_ *)auStack_21,(IFormatProvider *)0x0,
                       (MethodInfo *)0x0);
  pSVar23 = mscorlib.dll::System::String::String_Concat_4
                      (StringLiteral_Show_bubble_2d_,pSVar23,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar23,(MethodInfo *)0x0);
  pTVar24 = (this->fields).textBubblePrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar24 = (TextBubble *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pTVar24,
                       TextBubble_MethodInfo__UnityEngine__Object__Instantiate<TextBubble>_TextBubble_
                      );
  uVar25 = 0;
  if (content == (List_1_UnityEngine_RectTransform_ *)0x0) goto DAT_?;
  lVar26 = 0x20;
  for (; (int)uVar25 < (content->fields)._size; uVar25 = uVar25 + 1) {
    if ((uint)(content->fields)._size <= uVar25) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      iVar7 = (*pcVar6)();
      return iVar7;
    }
    pRVar27 = (content->fields)._items;
    if (pRVar27 == (RectTransform__Array *)0x0) goto DAT_?;
    if ((uint)pRVar27->max_length <= uVar25) {
      FUN_?();
      pcVar6 = (code *)swi(3);
      iVar7 = (*pcVar6)();
      return iVar7;
    }
    pOVar28 = *(Object **)((longlong)pRVar27->vector + lVar26 + -0x20);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    transformContent =
         (RectTransform *)
         UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                   (pOVar28,
                    UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
    if (pTVar24 == (TextBubble *)0x0) goto DAT_?;
    TextBubble::TextBubble_Add(pTVar24,transformContent,(MethodInfo *)0x0);
    lVar26 = lVar26 + 8;
  }
  if (pTVar24 == (TextBubble *)0x0) goto DAT_?;
  (pTVar24->fields).centerPoint.x = fVar18;
  (pTVar24->fields).centerPoint.y = (float)auStack_9._4_4_ + (float)auStack_9._4_4_;
  (pTVar24->fields).bubbleId = iVar7;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (parentTransform == (Transform *)0x0) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar10 = (pTVar24->fields)._._._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) goto code_?;
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar6 = (code *)swi(3);
      iVar7 = (*pcVar6)();
      return iVar7;
    }
    pcRam_? = pcVar6;
    pvVar10 = (void *)(*pcRam_?)(pvVar10);
    pOVar28 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
              Unmarshal_UnmarshalUnityObject
                        (pvVar10,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                        );
    if (pOVar28 == (Object *)0x0) goto DAT_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar29 = pOVar28[1].klass;
    if (pOVar29 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(pOVar28,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      iVar7 = (*pcVar6)();
      return iVar7;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar6 = (code *)swi(3);
      iVar7 = (*pcVar6)();
      return iVar7;
    }
    pcRam_? = pcVar6;
    pvVar10 = (void *)(*pcRam_?)(pOVar29);
    pOVar28 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
              Unmarshal_UnmarshalUnityObject
                        (pvVar10,
                         UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                        );
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar10 = (this->fields)._._._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      iVar7 = (*pcVar6)();
      return iVar7;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar6 = (code *)swi(3);
      iVar7 = (*pcVar6)();
      return iVar7;
    }
    pcRam_? = pcVar6;
    pvVar10 = (void *)(*pcRam_?)(pvVar10);
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject
              (pvVar10,
               UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
              );
    if (pOVar28 == (Object *)0x0) goto DAT_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar29 = pOVar28[1].klass;
    if (pOVar29 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(pOVar28,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      iVar7 = (*pcVar6)();
      return iVar7;
    }
    if ((
        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?();
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar6 = (code *)swi(3);
      iVar7 = (*pcVar6)();
      return iVar7;
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((parentTransform->fields)._._.m_CachedPtr == (void *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar10 = (pTVar24->fields)._._._._.m_CachedPtr;
    if (pvVar10 == (void *)0x0) goto code_?;
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar6 = (code *)swi(3);
      iVar7 = (*pcVar6)();
      return iVar7;
    }
    pcRam_? = pcVar6;
    pvVar10 = (void *)(*pcRam_?)(pvVar10);
    pOVar28 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
              Unmarshal_UnmarshalUnityObject
                        (pvVar10,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                        );
    if (pOVar28 == (Object *)0x0) goto DAT_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar29 = pOVar28[1].klass;
    if (pOVar29 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(pOVar28,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      iVar7 = (*pcVar6)();
      return iVar7;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar6 = (code *)swi(3);
      iVar7 = (*pcVar6)();
      return iVar7;
    }
    pcRam_? = pcVar6;
    pvVar10 = (void *)(*pcRam_?)(pOVar29);
    pOVar28 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
              Unmarshal_UnmarshalUnityObject
                        (pvVar10,
                         UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                        );
    if (pOVar28 == (Object *)0x0) goto DAT_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar29 = pOVar28[1].klass;
    if (pOVar29 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(pOVar28,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      iVar7 = (*pcVar6)();
      return iVar7;
    }
    if ((
        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?();
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar6 = (code *)swi(3);
      iVar7 = (*pcVar6)();
      return iVar7;
    }
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pOVar29);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar10 = (pTVar24->fields)._._._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar24,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    iVar7 = (*pcVar6)();
    return iVar7;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar6 = (code *)swi(3);
    iVar7 = (*pcVar6)();
    return iVar7;
  }
  pcRam_? = pcVar6;
  pvVar10 = (void *)(*pcRam_?)(pvVar10);
  pOVar28 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
            Unmarshal_UnmarshalUnityObject
                      (pvVar10,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                      );
  if (pOVar28 != (Object *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pOVar29 = pOVar28[1].klass;
    if (pOVar29 == (Object__Class *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException(pOVar28,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      iVar7 = (*pcVar6)();
      return iVar7;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar11 = func_?(&UNK_?);
      FUN_?(uVar11,0);
      pcVar6 = (code *)swi(3);
      iVar7 = (*pcVar6)();
      return iVar7;
    }
    pcRam_? = pcVar6;
    pvVar10 = (void *)(*pcRam_?)(pOVar29);
    pOVar28 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
              Unmarshal_UnmarshalUnityObject
                        (pvVar10,
                         UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                        );
    if (pOVar28 != (Object *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar10 = (void *)0x0;
      pOVar29 = pOVar28[1].klass;
      if (pOVar29 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar28,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      pcRam_? = pcVar6;
      auStack_5._0_8_ = uVar16;
      stack0xffffffffffffffc0 = uStack_4;
      auStack_13._0_8_ = uVar11;
      auStack_13._8_8_ = uVar17;
      (*pcRam_?)(pOVar29);
      auStack_21._4_4_ = (undefined4)((ulonglong)pvVar10 >> 0x20);
      uVar25 = (uint)_UNK_?;
      fVar14 = (float)auStack_21._4_4_ / (float)(auStack_21._4_4_ & uVar25);
      auStack_21 = (undefined1  [8])pvVar10;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar30 = (pTVar24->fields)._._._._.m_CachedPtr;
      if (pvVar30 != (void *)0x0) {
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar11 = func_?(&UNK_?);
          FUN_?(uVar11,0);
          pcVar6 = (code *)swi(3);
          iVar7 = (*pcVar6)();
          return iVar7;
        }
        pcRam_? = pcVar6;
        pvVar30 = (void *)(*pcRam_?)(pvVar30);
        pOVar28 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar30,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                            );
        if (pOVar28 != (Object *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar29 = pOVar28[1].klass;
          if (pOVar29 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(pOVar28,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            iVar7 = (*pcVar6)();
            return iVar7;
          }
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar11 = func_?(&UNK_?);
            FUN_?(uVar11,0);
            pcVar6 = (code *)swi(3);
            iVar7 = (*pcVar6)();
            return iVar7;
          }
          pcRam_? = pcVar6;
          pvVar30 = (void *)(*pcRam_?)(pOVar29);
          pOVar28 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar30,
                               UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                              );
          if (pOVar28 != (Object *)0x0) {
            auStack_21 = (undefined1  [8])
                         CONCAT44(fVar14,SUB84(pvVar10,0) / (float)((uint)SUB84(pvVar10,0) & uVar25)
                                 );
            uStack_22._0_4_ = -0x400000;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pOVar29 = pOVar28[1].klass;
            if (pOVar29 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(pOVar28,(MethodInfo *)0x0);
              pcVar6 = (code *)swi(3);
              iVar7 = (*pcVar6)();
              return iVar7;
            }
            pcVar6 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
              uVar11 = func_?(&UNK_?);
              FUN_?(uVar11,0);
              pcVar6 = (code *)swi(3);
              iVar7 = (*pcVar6)();
              return iVar7;
            }
            pcRam_? = pcVar6;
            (*pcRam_?)(pOVar29);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar10 = (pTVar24->fields)._._._._.m_CachedPtr;
            if (pvVar10 == (void *)0x0) goto code_?;
            pcVar6 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
              uVar11 = func_?(&UNK_?);
              FUN_?(uVar11,0);
              pcVar6 = (code *)swi(3);
              iVar7 = (*pcVar6)();
              return iVar7;
            }
            pcRam_? = pcVar6;
            pvVar10 = (void *)(*pcRam_?)(pvVar10);
            pOVar28 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                      Unmarshal_UnmarshalUnityObject
                                (pvVar10,
                                 UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                );
            if (pOVar28 != (Object *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pOVar29 = pOVar28[1].klass;
              if (pOVar29 == (Object__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException(pOVar28,(MethodInfo *)0x0);
                pcVar6 = (code *)swi(3);
                iVar7 = (*pcVar6)();
                return iVar7;
              }
              pcVar6 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                uVar11 = func_?(&UNK_?);
                FUN_?(uVar11,0);
                pcVar6 = (code *)swi(3);
                iVar7 = (*pcVar6)();
                return iVar7;
              }
              pcRam_? = pcVar6;
              pvVar10 = (void *)(*pcRam_?)(pOVar29);
              pOVar28 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                        Unmarshal_UnmarshalUnityObject
                                  (pvVar10,
                                   UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                  );
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pOVar28 != (Object *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pOVar29 = pOVar28[1].klass;
                if (pOVar29 == (Object__Class *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException(pOVar28,(MethodInfo *)0x0);
                  pcVar6 = (code *)swi(3);
                  iVar7 = (*pcVar6)();
                  return iVar7;
                }
                pcVar6 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                  uVar11 = func_?(&UNK_?);
                  FUN_?(uVar11,0);
                  pcVar6 = (code *)swi(3);
                  iVar7 = (*pcVar6)();
                  return iVar7;
                }
                pcRam_? = pcVar6;
                (*pcRam_?)(pOVar29,&stack0xffffffffffffff68);
                TextBubble::TextBubble_set_Position(pTVar24,value,(MethodInfo *)0x0);
                pDVar31 = (this->fields).textBubbles;
                pOVar28 = (Object *)FUN_?(TypeInfo__TextBubbleController__BubbleTracker);
                if (pDVar31 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0)
                {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar31,iVar7,pOVar28,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar20 >> 8),2),
                             MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Add_int__TextBubbleController__BubbleTracker_
                             ->klass->rgctx_data[0x22].method);
                  pDVar31 = (this->fields).textBubbles;
                  if ((pDVar31 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)
                                 0x0) &&
                     (this_00 = (TextBubbleController_BubbleTracker *)
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32,System::Object]::
                                Dictionary_2_System_Int32_System_Object__get_Item
                                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar31,iVar7,
                                           MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                          ), this_00 != (TextBubbleController_BubbleTracker *)0x0))
                  {
                    TextBubbleController+BubbleTracker::
                    TextBubbleController_BubbleTracker_set_Bubble(this_00,pTVar24,(MethodInfo *)0x0)
                    ;
                    pDVar31 = (this->fields).textBubbles;
                    if ((pDVar31 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)
                                   0x0) &&
                       (pOVar28 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32,System::Object]::
                                  Dictionary_2_System_Int32_System_Object__get_Item
                                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar31,
                                             iVar7,
                                             MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                            ), pOVar28 != (Object *)0x0)) {
                      *(undefined4 *)((longlong)&pOVar28[1].klass + 4) = 0;
                      pDVar31 = (this->fields).textBubbles;
                      if ((pDVar31 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_
                                      *)0x0) &&
                         (pOVar28 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32,System::Object]::
                                    Dictionary_2_System_Int32_System_Object__get_Item
                                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar31,
                                               iVar7,
                                               MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                              ), pOVar28 != (Object *)0x0)) {
                        *(float *)&pOVar28[1].klass = lifeTime;
                        return iVar7;
                      }
                    }
                  }
                }
              }
              FUN_?();
              pcVar6 = (code *)swi(3);
              iVar7 = (*pcVar6)();
              return iVar7;
            }
          }
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
code_?:
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar24,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      iVar7 = (*pcVar6)();
      return iVar7;
    }
  }
DAT_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Void Start() */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_Start
               (TextBubbleController *this,MethodInfo *method)

{
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).mainCamera = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).mainCamera >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_Update
               (TextBubbleController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TextBubbleController::BubbleTracker>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TextBubbleController::BubbleTracker>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TextBubbleController::BubbleTracker>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_TextBubbleController::BubbleTracker>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_TextBubbleController::BubbleTracker>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).textBubbles;
  if (pDVar1 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pDStack_3 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    uStack_7 = (ulonglong)(uint)(pDVar1->fields)._version;
    uStack_8 = 2;
    uStack_9 = 0;
    uStack_10 = 0;
    DStack_11._version = (undefined4)uStack_7;
    DStack_11._index = uStack_7._4_4_;
    DStack_11._current._0_8_ = 0;
    DStack_11._current.value = (Object *)0x0;
    DStack_11._getEnumeratorRetType = 2;
    DStack_11._36_4_ = 0;
    pDStack_3 = pDVar1;
    DStack_11._dictionary = pDVar1;
    while (bVar12 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              (&DStack_11,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TextBubbleController::BubbleTracker>__MoveNext__
                              ), uVar13 = DStack_11._current._0_8_, bVar12 != 0) {
      bVar12 = TextBubbleController_UpdateBubble
                         (this,(TextBubbleController_BubbleTracker *)DStack_11._current.value,
                          (MethodInfo *)0x0);
      if (bVar12 != 0) {
        pLVar14 = (this->fields).removeList;
        if (pLVar14 == (List_1_System_Int32_ *)0x0) goto code_?;
        FUN_?(pLVar14,uVar13 & 0xffffffff);
      }
    }
    pLVar14 = (this->fields).removeList;
    if (pLVar14 != (List_1_System_Int32_ *)0x0) {
      uVar2 = (pLVar14->fields)._size - 1;
      lVar15 = (longlong)(int)uVar2;
      if (-1 < (int)uVar2) {
        lVar16 = lVar15 * 4 + 0x20;
        do {
          pDVar17 = (this->fields).textBubbles;
          pLVar14 = (this->fields).removeList;
          if (pLVar14 == (List_1_System_Int32_ *)0x0) goto code_?;
          if ((uint)(pLVar14->fields)._size <= uVar2) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          pIVar19 = (pLVar14->fields)._items;
          if (pIVar19 == (Int32__Array *)0x0) goto code_?;
          if ((uint)pIVar19->max_length <= uVar2) {
code_?:
            FUN_?();
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          if (((pDVar17 == (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) ||
              (pOVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)pDVar17,
                                    *(int32_t *)((longlong)pIVar19->vector + lVar16 + -0x20),
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                   ), pOVar20 == (Object *)0x0)) ||
             (pMVar21 = pOVar20[1].monitor, pMVar21 == (MonitorData *)0x0)) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_OnRemoved);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_OnRemoved,(MethodInfo *)0x0);
          *(undefined4 *)(pMVar21 + 0x50) = 0xffffffff;
          pDVar17 = (this->fields).textBubbles;
          pLVar14 = (this->fields).removeList;
          if (pLVar14 == (List_1_System_Int32_ *)0x0) goto code_?;
          if ((uint)(pLVar14->fields)._size <= uVar2) goto code_?;
          pIVar19 = (pLVar14->fields)._items;
          if (pIVar19 == (Int32__Array *)0x0) goto code_?;
          if ((uint)pIVar19->max_length <= uVar2) goto code_?;
          if ((pDVar17 == (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) ||
             (this_00 = (TextBubbleController_BubbleTracker *)
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar17,
                                   *(int32_t *)((longlong)pIVar19->vector + lVar16 + -0x20),
                                   MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                  ), this_00 == (TextBubbleController_BubbleTracker *)0x0))
          goto code_?;
          TextBubbleController+BubbleTracker::TextBubbleController_BubbleTracker_Clear
                    (this_00,(MethodInfo *)0x0);
          pDVar17 = (this->fields).textBubbles;
          pLVar14 = (this->fields).removeList;
          if (pLVar14 == (List_1_System_Int32_ *)0x0) goto code_?;
          if ((uint)(pLVar14->fields)._size <= uVar2) goto code_?;
          pIVar19 = (pLVar14->fields)._items;
          if (pIVar19 == (Int32__Array *)0x0) goto code_?;
          if ((uint)pIVar19->max_length <= uVar2) goto code_?;
          if (pDVar17 == (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar17,
                     *(int32_t *)((longlong)pIVar19->vector + lVar16 + -0x20),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Remove_int_
                    );
          uVar2 = uVar2 - 1;
          lVar16 = lVar16 + -4;
          lVar15 = lVar15 + -1;
        } while (-1 < lVar15);
      }
      pLVar14 = (this->fields).removeList;
      if (pLVar14 != (List_1_System_Int32_ *)0x0) {
        piVar22 = &(pLVar14->fields)._version;
        *piVar22 = *piVar22 + 1;
        (pLVar14->fields)._size = 0;
        return;
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Boolean UpdateBubble(TextBubbleController+BubbleTracker) */

bool Assembly-CSharp.dll::TextBubbleController::TextBubbleController_UpdateBubble
               (TextBubbleController *this,TextBubbleController_BubbleTracker *bubble,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Time_out);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (bubble != (TextBubbleController_BubbleTracker *)0x0) {
    fVar1 = (bubble->fields).currentLifeTime;
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      bVar4 = (*pcVar2)();
      return bVar4;
    }
    pcRam_? = pcVar2;
    fVar5 = (float)(*pcRam_?)();
    pcVar2 = pcRam_?;
    (bubble->fields).currentLifeTime = fVar5 + fVar1;
    fVar1 = (bubble->fields).timeToLive;
    pcVar6 = pcRam_?;
    if ((pcVar2 == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar6 = pcVar2, pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      bVar4 = (*pcVar2)();
      return bVar4;
    }
    pcRam_? = pcVar6;
    fVar5 = (float)(*pcVar2)();
    fVar1 = fVar1 - fVar5;
    (bubble->fields).timeToLive = fVar1;
    fVar5 = (this->fields).bubbleFadeIn;
    fVar1 = fVar1 / (this->fields).bubbleLifeTime;
    if ((bubble->fields).currentLifeTime <= fVar5) {
      fVar1 = (bubble->fields).currentLifeTime / fVar5;
    }
    pTVar7 = (bubble->fields).bubble;
    if ((pTVar7 != (TextBubble *)0x0) &&
       (this_00 = (pTVar7->fields).fadeGroup, this_00 != (CanvasGroup *)0x0)) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,fVar1,(MethodInfo *)0x0);
      if ((bubble->fields).timeToLive <= 0.0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Time_out,(MethodInfo *)0x0);
        return 1;
      }
      return 0;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar4 = (*pcVar2)();
  return bVar4;
}


/* Void UpdateContent(Int32, List`1[UnityEngine.RectTransform]) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_UpdateContent
               (TextBubbleController *this,int32_t bubbleId,
               List_1_UnityEngine_RectTransform_ *content,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).textBubbles;
  if (((this_00 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
      (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)this_00,bubbleId,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                          ), pOVar1 != (Object *)0x0)) &&
     (this_01 = (TextBubble *)pOVar1[1].monitor, this_01 != (TextBubble *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Clear__);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar2 = (this_01->fields).content;
    uVar3 = 0;
    uVar4 = 0;
    if (pLVar2 != (List_1_UnityEngine_Object_ *)0x0) {
      lVar5 = 0x20;
      lVar6 = 0x20;
      do {
        pLVar7 = (this_01->fields).content;
        if ((pLVar2->fields)._size <= (int)uVar4) {
          if (pLVar7 != (List_1_UnityEngine_Object_ *)0x0) {
            length = (pLVar7->fields)._size;
            piVar8 = &(pLVar7->fields)._version;
            *piVar8 = *piVar8 + 1;
            (pLVar7->fields)._size = 0;
            if (0 < length) {
              mscorlib.dll::System::Array::Array_Clear
                        ((Array *)(pLVar7->fields)._items,0,length,(MethodInfo *)0x0);
            }
            if (content != (List_1_UnityEngine_RectTransform_ *)0x0) goto code_?;
          }
          break;
        }
        if (pLVar7 == (List_1_UnityEngine_Object_ *)0x0) break;
        if ((uint)(pLVar7->fields)._size <= uVar4) goto code_?;
        pOVar9 = (pLVar7->fields)._items;
        if (pOVar9 == (Object_1__Array *)0x0) break;
        if ((uint)pOVar9->max_length <= uVar4) goto code_?;
        obj = *(Object_1 **)((longlong)pOVar9->vector + lVar6 + -0x20);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy(obj,0.0,(MethodInfo *)0x0)
        ;
        pLVar2 = (this_01->fields).content;
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + 8;
      } while (pLVar2 != (List_1_UnityEngine_Object_ *)0x0);
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
code_?:
  if ((content->fields)._size <= (int)uVar3) {
    return;
  }
  if ((uint)(content->fields)._size <= uVar3) {
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pRVar11 = (content->fields)._items;
  if (pRVar11 == (RectTransform__Array *)0x0) goto code_?;
  if ((uint)pRVar11->max_length <= uVar3) {
code_?:
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pOVar1 = *(Object **)((longlong)pRVar11->vector + lVar5 + -0x20);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  transformContent =
       (RectTransform *)
       UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                 (pOVar1,
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                 );
  TextBubble::TextBubble_Add(this_01,transformContent,(MethodInfo *)0x0);
  uVar3 = uVar3 + 1;
  lVar5 = lVar5 + 8;
  goto code_?;
}


/* Void UpdatePosition(Int32, Vector2, Vector2) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_UpdatePosition
               (TextBubbleController *this,int32_t bubbleId,Vector2 anchoredPosition,
               Vector2 targetCenterPoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).textBubbles;
  if (((pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
      (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,bubbleId,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                          ), pOVar2 != (Object *)0x0)) &&
     (pMVar3 = pOVar2[1].monitor, pMVar3 != (MonitorData *)0x0)) {
    fStack_4 = targetCenterPoint.x;
    fStack_5 = targetCenterPoint.y;
    *(float *)(pMVar3 + 0x48) = fStack_4;
    *(float *)(pMVar3 + 0x4c) = fStack_5;
    *(int32_t *)(pMVar3 + 0x50) = bubbleId;
    pDVar1 = (this->fields).textBubbles;
    if (((pDVar1 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
        (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,bubbleId,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                            ), pOVar2 != (Object *)0x0)) &&
       (this_00 = (TextBubble *)pOVar2[1].monitor, this_00 != (TextBubble *)0x0)) {
      obj = (this_00->fields).tail;
      if (obj == (RectTransform *)0x0) {
        FUN_?(this_00,anchoredPosition,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar7);
      TextBubble::TextBubble_RecalcPositionWithScreenCollision(this_00,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdatePosition3D(Int32, Vector3, Vector2) */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController_UpdatePosition3D
               (TextBubbleController *this,int32_t bubbleId,Vector3 *worldPosition,Vector2 offset,
               MethodInfo *method)

{
  pCVar1 = (this->fields).mainCamera;
  if (pCVar1 != (Camera *)0x0) {
    VStack_2.x = worldPosition->x;
    VStack_2.y = worldPosition->y;
    VStack_2.z = worldPosition->z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_3.x = 0.0;
    VStack_3.y = 0.0;
    VStack_3.z = 0.0;
    pvVar4 = (pCVar1->fields)._._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4,&VStack_2,2,&VStack_3);
    if (VStack_3.z <= 0.0) {
      return;
    }
    VStack_2.x = VStack_3.x;
    VStack_2.y = VStack_3.y;
    VStack_2.z = VStack_3.z;
    pVVar7 = TextBubbleController_CalculateOffSet
                       (aVStack_8,this,offset,&VStack_2,(MethodInfo *)0x0);
    VStack_2.x = pVVar7->x;
    VStack_2.y = pVVar7->y;
    VStack_2.z = pVVar7->z;
    fVar9 = VStack_3.x + VStack_2.x;
    fVar10 = VStack_3.y + VStack_2.y;
    pCVar1 = (this->fields).mainCamera;
    if (pCVar1 != (Camera *)0x0) {
      VStack_2.x = worldPosition->x;
      VStack_2.y = worldPosition->y;
      VStack_2.z = worldPosition->z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_3.x = 0.0;
      VStack_3.y = 0.0;
      VStack_3.z = 0.0;
      pvVar4 = (pCVar1->fields)._._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4,&VStack_2,2,&VStack_3);
      fVar11 = VStack_3.x * TypeRef__System__Activator__T._0_4_;
      fVar12 = VStack_3.y + VStack_3.y;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar13 = (this->fields).textBubbles;
      if (((pDVar13 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
          (pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar13,bubbleId,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                              ), pOVar14 != (Object *)0x0)) &&
         (pMVar15 = pOVar14[1].monitor, pMVar15 != (MonitorData *)0x0)) {
        *(float *)(pMVar15 + 0x48) = fVar11;
        *(float *)(pMVar15 + 0x4c) = fVar12;
        *(int32_t *)(pMVar15 + 0x50) = bubbleId;
        pDVar13 = (this->fields).textBubbles;
        if (((pDVar13 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
            (pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar13,bubbleId,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                ), pOVar14 != (Object *)0x0)) &&
           ((TextBubble *)pOVar14[1].monitor != (TextBubble *)0x0)) {
          value.y = fVar10;
          value.x = fVar9;
          TextBubble::TextBubble_set_Position
                    ((TextBubble *)pOVar14[1].monitor,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* TextBubbleController() */

void Assembly-CSharp.dll::TextBubbleController::TextBubbleController__ctor
               (TextBubbleController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).bubbleLifeTime = 2.0;
  (this->fields).bubbleFadeIn = 0.2;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).textBubbles =
       (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).textBubbles >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pLVar6 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(pLVar6,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).removeList = pLVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).removeList >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

