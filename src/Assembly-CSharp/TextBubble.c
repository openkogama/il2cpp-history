
/* Void Add(RectTransform) */

void Assembly-CSharp.dll::TextBubble::TextBubble_Add
               (TextBubble *this,RectTransform *transformContent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Add_UnityEngine__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).content;
  if ((transformContent != (RectTransform *)0x0) &&
     (item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)transformContent,(MethodInfo *)0x0),
     pMVar1 = 
     MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Add_UnityEngine__Object_,
     this_00 != (List_1_UnityEngine_Object_ *)0x0)) {
    piVar2 = &(this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pOVar3 = (this_00->fields)._items;
    if (pOVar3 != (Object_1__Array *)0x0) {
      uVar4 = (this_00->fields)._size;
      if (uVar4 < (uint)pOVar3->max_length) {
        (this_00->fields)._size = uVar4 + 1;
        FUN_?(pOVar3,(longlong)(int)uVar4,item);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)this_00,(Object *)item,
                   pMVar1->klass->rgctx_data[0xe].method);
      }
      pRVar5 = TextBubble_get_BubbleTransform(this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                      ,pRVar5,0,0,unaff_RDI);
        LOCK();
        UNLOCK();
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (transformContent == (RectTransform *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pvVar7 = (transformContent->fields)._._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)transformContent,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      if (pRVar5 == (RectTransform *)0x0) {
        pvVar8 = (void *)0x0;
      }
      else {
        pvVar8 = (pRVar5->fields)._._._.m_CachedPtr;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar7,pvVar8,0);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Single CalculatePivotNearEdgeOffset(Single) */

float Assembly-CSharp.dll::TextBubble::TextBubble_CalculatePivotNearEdgeOffset
                (TextBubble *this,float pivot,MethodInfo *method)

{
  fVar1 = 0.0;
  iVar2 = -1;
  if (_UNK_? < pivot) {
    iVar2 = 1;
  }
  fVar3 = (pivot - _UNK_?) * (float)iVar2;
  if (_UNK_? < fVar3) {
    obj = (this->fields).tail;
    if (obj == (RectTransform *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      fVar1 = (float)(*pcVar4)();
      return fVar1;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_5 = 0;
    uStack_6 = 0;
    pvVar7 = (obj->fields)._._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      fVar1 = (float)(*pcVar4)();
      return fVar1;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar4 = (code *)swi(3);
      fVar1 = (float)(*pcVar4)();
      return fVar1;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar7,&uStack_5);
    fVar1 = (_UNK_? / fVar3) * uStack_6._4_4_ * (float)iVar2;
  }
  return fVar1;
}


/* Void ClearContent() */

void Assembly-CSharp.dll::TextBubble::TextBubble_ClearContent(TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__get_Count__)
    ;
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
  pLVar1 = (this->fields).content;
  uVar2 = 0;
  if (pLVar1 != (List_1_UnityEngine_Object_ *)0x0) {
    lVar3 = 0x20;
    do {
      pLVar4 = (this->fields).content;
      if ((pLVar1->fields)._size <= (int)uVar2) {
        if (pLVar4 != (List_1_UnityEngine_Object_ *)0x0) {
          length = (pLVar4->fields)._size;
          piVar5 = &(pLVar4->fields)._version;
          *piVar5 = *piVar5 + 1;
          (pLVar4->fields)._size = 0;
          if (0 < length) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(pLVar4->fields)._items,0,length,(MethodInfo *)0x0);
          }
          return;
        }
        break;
      }
      if (pLVar4 == (List_1_UnityEngine_Object_ *)0x0) break;
      if ((uint)(pLVar4->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pOVar7 = (pLVar4->fields)._items;
      if (pOVar7 == (Object_1__Array *)0x0) break;
      if ((uint)pOVar7->max_length <= uVar2) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      obj = *(Object_1 **)((longlong)pOVar7->vector + lVar3 + -0x20);
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy(obj,0.0,(MethodInfo *)0x0);
      pLVar1 = (this->fields).content;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (pLVar1 != (List_1_UnityEngine_Object_ *)0x0);
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Initialize(Vector2, Int32) */

void Assembly-CSharp.dll::TextBubble::TextBubble_Initialize
               (TextBubble *this,Vector2 center,int32_t bubbleId,MethodInfo *method)

{
  (this->fields).bubbleId = bubbleId;
  (this->fields).centerPoint = center;
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TextBubble::TextBubble_OnDestroy(TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TextBubble___OnDestroy_b__16_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Bubble_not_removed_from_controll);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).bubbleId != -1) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Bubble_not_removed_from_controll,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__TextBubble___OnDestroy_b__16_0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,this_00,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
              );
  }
  return;
}


/* Void OnRemoved() */

void Assembly-CSharp.dll::TextBubble::TextBubble_OnRemoved(TextBubble *this,MethodInfo *method)

{
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
  (this->fields).bubbleId = -1;
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::TextBubble::TextBubble_OnValidate(TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 == (Transform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar3 = (Transform *)0x0;
  if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
    pTVar3 = pTVar1;
  }
  if (pTVar3 == (Transform *)0x0) {
    FUN_?(pTVar1,TypeInfo__UnityEngine__RectTransform);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar3 = (Transform *)0x0;
  if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
    pTVar3 = pTVar1;
  }
  auStack_4[0] =
       CONCAT44((TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y,
                (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                  ,auStack_4[0],0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar3 == (Transform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar5 = (pTVar3->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar5,auStack_4);
  return;
}


/* Void RecalcPositionAndSize(Int32) */

void Assembly-CSharp.dll::TextBubble::TextBubble_RecalcPositionAndSize
               (TextBubble *this,int32_t inside,MethodInfo *method)

{
  fVar1 = (this->fields).centerPoint.x * _UNK_?;
  fVar2 = (this->fields).centerPoint.y * _UNK_?;
  pRVar3 = (this->fields).tail;
  if (pRVar3 != (RectTransform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_4 = (undefined1  [8])0x0;
    uStack_5 = uStack_5 & 0xffffffff00000000;
    pvVar6 = (pRVar3->fields)._._._.m_CachedPtr;
    if (pvVar6 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar3,(MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(pvVar6,auStack_4);
    fVar1 = fVar1 - (float)auStack_4._0_4_;
    fVar2 = fVar2 - (float)auStack_4._4_4_;
    this_00 = (Transform *)(this->fields).tail;
    if ((float)((uint)fVar2 & _UNK_?) < (float)((uint)fVar1 & _UNK_?)) {
      iVar9 = 1;
      if (0.0 < fVar1) {
        iVar9 = -1;
      }
      if (this_00 != (Transform *)0x0) {
        auStack_10 = (undefined1  [8])(ulonglong)(uint)(float)iVar9;
        uStack_11 = uStack_11 & 0xffffffff00000000;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_up
                  (this_00,(Vector3 *)auStack_10,(MethodInfo *)0x0);
        VVar12 = TextBubble_get_Position(this,(MethodInfo *)0x0);
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
        iVar13 = (*pcRam_?)();
        fStackX_c = VVar12.y;
        fVar1 = TextBubble_CalculatePivotNearEdgeOffset
                           (this,fStackX_c / (float)iVar13,(MethodInfo *)0x0);
        pRVar3 = (this->fields).tail;
        if (pRVar3 != (RectTransform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          auStack_10 = (undefined1  [8])0x0;
          uStack_11 = 0;
          pvVar6 = (pRVar3->fields)._._._.m_CachedPtr;
          if (pvVar6 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar3,(MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcRam_? = pcVar7;
          (*pcRam_?)(pvVar6);
          fVar2 = (float)iVar9 * uStack_11._4_4_;
          pRVar3 = TextBubble_get_BubbleTransform(this,(MethodInfo *)0x0);
          VVar12.x = (float)(iVar9 < 1);
          if (pRVar3 != (RectTransform *)0x0) {
            VVar12.y = fStackX_c / (float)iVar13;
            UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                      (pRVar3,VVar12,(MethodInfo *)0x0);
            pRVar14 = TextBubble_get_BubbleTransform(this,(MethodInfo *)0x0);
            pRVar3 = (this->fields).tail;
            if (pRVar3 != (RectTransform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              auStack_4._0_4_ = 0.0;
              auStack_4._4_4_ = 0.0;
              uStack_5 = uStack_5 & 0xffffffff00000000;
              pvVar6 = (pRVar3->fields)._._._.m_CachedPtr;
              if (pvVar6 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar3,(MethodInfo *)0x0);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pcVar7 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                uVar8 = func_?(&UNK_?);
                FUN_?(uVar8,0);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pcRam_? = pcVar7;
              (*pcRam_?)(pvVar6);
              uVar8._0_4_ = (float)auStack_4._0_4_ + fVar2;
              if (pRVar14 == (RectTransform *)0x0) {
                FUN_?();
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              uVar8._4_4_ = (float)auStack_4._4_4_ + fVar1;
              uStack_11 = uStack_11 & 0xffffffff00000000;
              auStack_10 = (undefined1  [8])uVar8;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar6 = (pRVar14->fields)._._._.m_CachedPtr;
              if (pvVar6 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar14,(MethodInfo *)0x0);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pcVar7 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                uVar8 = func_?(&UNK_?);
                FUN_?(uVar8,0);
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
code_?:
              pcRam_? = pcVar7;
              (*pcRam_?)(pvVar6,auStack_10);
              return;
            }
          }
        }
      }
    }
    else {
      iVar9 = 1;
      if (0.0 < fVar2) {
        iVar9 = -1;
      }
      if (this_00 != (Transform *)0x0) {
        uStack_5 = uStack_5 & 0xffffffff00000000;
        auStack_4 = (undefined1  [8])((ulonglong)(uint)(float)iVar9 << 0x20);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_up
                  (this_00,(Vector3 *)auStack_4,(MethodInfo *)0x0);
        VVar12 = TextBubble_get_Position(this,(MethodInfo *)0x0);
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
        iVar13 = (*pcRam_?)();
        fStackX_8 = VVar12.x;
        fVar1 = TextBubble_CalculatePivotNearEdgeOffset
                           (this,fStackX_8 / (float)iVar13,(MethodInfo *)0x0);
        pRVar3 = (this->fields).tail;
        if (pRVar3 != (RectTransform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          auStack_4 = (undefined1  [8])0x0;
          uStack_5 = 0;
          pvVar6 = (pRVar3->fields)._._._.m_CachedPtr;
          if (pvVar6 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar3,(MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcRam_? = pcVar7;
          (*pcRam_?)(pvVar6);
          pRVar3 = (this->fields).tail;
          if (pRVar3 != (RectTransform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            auStack_10 = (undefined1  [8])0x0;
            uStack_11 = 0;
            pvVar6 = (pRVar3->fields)._._._.m_CachedPtr;
            if (pvVar6 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar3,(MethodInfo *)0x0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcVar7 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pcRam_? = pcVar7;
            (*pcRam_?)(pvVar6);
            fVar2 = (float)iVar9 * uStack_11._4_4_;
            pRVar3 = TextBubble_get_BubbleTransform(this,(MethodInfo *)0x0);
            if (pRVar3 != (RectTransform *)0x0) {
              value.y = (float)((float)iVar9 <= 0.0);
              value.x = fStackX_8 / (float)iVar13;
              UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_pivot
                        (pRVar3,value,(MethodInfo *)0x0);
              pRVar14 = TextBubble_get_BubbleTransform(this,(MethodInfo *)0x0);
              pRVar3 = (this->fields).tail;
              if (pRVar3 != (RectTransform *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                auStack_4._0_4_ = 0.0;
                auStack_4._4_4_ = 0.0;
                uStack_5 = uStack_5 & 0xffffffff00000000;
                pvVar6 = (pRVar3->fields)._._._.m_CachedPtr;
                if (pvVar6 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar3,(MethodInfo *)0x0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcVar7 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                  uVar8 = func_?(&UNK_?);
                  FUN_?(uVar8,0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcRam_? = pcVar7;
                (*pcRam_?)(pvVar6);
                uVar15._0_4_ = (float)auStack_4._0_4_ + fVar1;
                if (pRVar14 == (RectTransform *)0x0) {
                  FUN_?();
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                uVar15._4_4_ = (float)auStack_4._4_4_ + fVar2;
                uStack_11 = uStack_11 & 0xffffffff00000000;
                auStack_10 = (undefined1  [8])uVar15;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar6 = (pRVar14->fields)._._._.m_CachedPtr;
                if (pvVar6 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar14,(MethodInfo *)0x0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pcVar7 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
                  uVar8 = func_?(&UNK_?);
                  FUN_?(uVar8,0);
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void RecalcPositionWithScreenCollision() */

void Assembly-CSharp.dll::TextBubble::TextBubble_RecalcPositionWithScreenCollision
               (TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TextBubble_RecalcPositionAndSize(this,1,(MethodInfo *)0x0);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  iVar3 = (*pcRam_?)();
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar4 = (float)iVar3;
  iVar3 = (*pcRam_?)();
  fVar5 = (float)iVar3;
  fourCornersArray = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3);
  this_00 = TextBubble_get_BubbleTransform(this,(MethodInfo *)0x0);
  if ((this_00 == (RectTransform *)0x0) ||
     (UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_GetWorldCorners
                (this_00,fourCornersArray,(MethodInfo *)0x0),
     fourCornersArray == (Vector3__Array *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((int)fourCornersArray->max_length != 0) {
    uVar6 = fourCornersArray->vector[0].x;
    uVar7 = fourCornersArray->vector[0].y;
    if ((((0.0 <= (float)uVar6) && ((float)uVar6 < fVar4 + 0.0)) && (0.0 <= (float)uVar7)) &&
       ((float)uVar7 < fVar5 + 0.0)) {
      if ((uint)fourCornersArray->max_length < 2) goto DAT_?;
      uVar8 = fourCornersArray->vector[1].x;
      uVar9 = fourCornersArray->vector[1].y;
      if (((0.0 <= (float)uVar8) && ((float)uVar8 < fVar4 + 0.0)) &&
         ((0.0 <= (float)uVar9 && ((float)uVar9 < fVar5 + 0.0)))) {
        if ((uint)fourCornersArray->max_length < 3) goto DAT_?;
        uVar10 = fourCornersArray->vector[2].x;
        uVar11 = fourCornersArray->vector[2].y;
        if (((0.0 <= (float)uVar10) && ((float)uVar10 < fVar4 + 0.0)) &&
           ((0.0 <= (float)uVar11 && ((float)uVar11 < fVar5 + 0.0)))) {
          if ((uint)fourCornersArray->max_length < 4) goto DAT_?;
          uVar12 = fourCornersArray->vector[3].x;
          uVar13 = fourCornersArray->vector[3].y;
          if ((((0.0 <= (float)uVar12) && ((float)uVar12 < fVar4 + 0.0)) && (0.0 <= (float)uVar13)) &&
             ((float)uVar13 < fVar5 + 0.0)) {
            return;
          }
        }
      }
    }
    TextBubble_RecalcPositionAndSize(this,-1,(MethodInfo *)0x0);
    return;
  }
DAT_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetTransparancy(Single) */

void Assembly-CSharp.dll::TextBubble::TextBubble_SetTransparancy
               (TextBubble *this,float a,MethodInfo *method)

{
  obj = (this->fields).fadeGroup;
  if (obj == (CanvasGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                  ,in_RDX,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (CanvasGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,a);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TextBubble::TextBubble_Start(TextBubble *this,MethodInfo *method)

{
  obj = (this->fields).fadeGroup;
  if (obj == (CanvasGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (CanvasGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void <OnDestroy>b__16_0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::TextBubble::TextBubble__OnDestroy_b__16_0
               (TextBubble *this,TextBubbleController *x,BaseEventData *y,MethodInfo *method)

{
  if (x == (TextBubbleController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  key = (this->fields).bubbleId;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                  ,key,0);
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
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(x->fields).textBubbles;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,key,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      return;
    }
    pDVar3 = (x->fields).textBubbles;
    if ((pDVar3 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
       (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           ), pOVar4 != (Object *)0x0)) {
      pDVar3 = (x->fields).textBubbles;
      *(undefined4 *)&pOVar4[1].klass = 0;
      if (pDVar3 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
        pTVar5 = (TextBubbleController_BubbleTracker *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                           );
        TextBubbleController::TextBubbleController_UpdateBubble(x,pTVar5,(MethodInfo *)0x0);
        pDVar3 = (x->fields).textBubbles;
        if (((pDVar3 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
            (pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                      ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,
                                 MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                ), pOVar4 != (Object *)0x0)) &&
           ((TextBubble *)pOVar4[1].monitor != (TextBubble *)0x0)) {
          TextBubble_OnRemoved((TextBubble *)pOVar4[1].monitor,(MethodInfo *)0x0);
          pDVar3 = (x->fields).textBubbles;
          if ((pDVar3 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) &&
             (pTVar5 = (TextBubbleController_BubbleTracker *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_TextBubbleController::BubbleTracker>__get_Item_int_
                                 ), pTVar5 != (TextBubbleController_BubbleTracker *)0x0)) {
            TextBubbleController+BubbleTracker::TextBubbleController_BubbleTracker_Clear
                      (pTVar5,(MethodInfo *)0x0);
            pDVar3 = (x->fields).textBubbles;
            if (pDVar3 != (Dictionary_2_System_Int32_TextBubbleController_BubbleTracker_ *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Remove
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,key,
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
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* TextBubble() */

void Assembly-CSharp.dll::TextBubble::TextBubble__ctor(TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Object>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Object_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Object>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Object>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).content = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).content >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  bVar1 = cRam_? == '\0';
  (this->fields).bubbleId = -1;
  if (bVar1) {
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


/* RectTransform get_BubbleTransform() */

RectTransform *
Assembly-CSharp.dll::TextBubble::TextBubble_get_BubbleTransform(TextBubble *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).bubble;
  if (this_00 == (LayoutGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pRVar2 = (RectTransform *)(*pcVar1)();
    return pRVar2;
  }
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this_00,(MethodInfo *)0x0);
  pTVar4 = pTVar3;
  if (pTVar3 != (Transform *)0x0) {
    pTVar4 = (Transform *)0x0;
    if (pTVar3->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar4 = pTVar3;
    }
    if (pTVar4 == (Transform *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      pRVar2 = (RectTransform *)(*pcVar1)();
      return pRVar2;
    }
  }
  return (RectTransform *)pTVar4;
}


/* Single get_HorizontalPadding() */

float Assembly-CSharp.dll::TextBubble::TextBubble_get_HorizontalPadding
                (TextBubble *this,MethodInfo *method)

{
  pLVar1 = (this->fields).bubble;
  if ((pLVar1 != (LayoutGroup *)0x0) &&
     (pRVar2 = (pLVar1->fields).m_Padding, pRVar2 != (RectOffset *)0x0)) {
    pvVar3 = (pRVar2->fields).m_Ptr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      fVar5 = (float)(*pcVar4)();
      return fVar5;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar4 = (code *)swi(3);
      fVar5 = (float)(*pcVar4)();
      return fVar5;
    }
    pcRam_? = pcVar4;
    iVar7 = (*pcRam_?)(pvVar3);
    pLVar1 = (this->fields).bubble;
    if ((pLVar1 != (LayoutGroup *)0x0) &&
       (pRVar2 = (pLVar1->fields).m_Padding, pRVar2 != (RectOffset *)0x0)) {
      pvVar3 = (pRVar2->fields).m_Ptr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        fVar5 = (float)(*pcVar4)();
        return fVar5;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        fVar5 = (float)(*pcVar4)();
        return fVar5;
      }
      pcRam_? = pcVar4;
      iVar8 = (*pcRam_?)(pvVar3);
      return (float)(iVar8 + iVar7);
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float)(*pcVar4)();
  return fVar5;
}


/* Vector2 get_Position() */

Vector2 Assembly-CSharp.dll::TextBubble::TextBubble_get_Position
                  (TextBubble *this,MethodInfo *method)

{
  obj = (this->fields).tail;
  if (obj == (RectTransform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar1)();
    return VVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_3.x = 0.0;
  VStack_3.y = 0.0;
  uStack_4 = 0;
  pvVar5 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar1)();
    return VVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    VVar2 = (Vector2)(*pcVar1)();
    return VVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&VStack_3);
  return VStack_3;
}


/* Single get_VerticalPadding() */

float Assembly-CSharp.dll::TextBubble::TextBubble_get_VerticalPadding
                (TextBubble *this,MethodInfo *method)

{
  pLVar1 = (this->fields).bubble;
  if ((pLVar1 != (LayoutGroup *)0x0) &&
     (pRVar2 = (pLVar1->fields).m_Padding, pRVar2 != (RectOffset *)0x0)) {
    pvVar3 = (pRVar2->fields).m_Ptr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      fVar5 = (float)(*pcVar4)();
      return fVar5;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar4 = (code *)swi(3);
      fVar5 = (float)(*pcVar4)();
      return fVar5;
    }
    pcRam_? = pcVar4;
    iVar7 = (*pcRam_?)(pvVar3);
    pLVar1 = (this->fields).bubble;
    if ((pLVar1 != (LayoutGroup *)0x0) &&
       (pRVar2 = (pLVar1->fields).m_Padding, pRVar2 != (RectOffset *)0x0)) {
      pvVar3 = (pRVar2->fields).m_Ptr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        fVar5 = (float)(*pcVar4)();
        return fVar5;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        fVar5 = (float)(*pcVar4)();
        return fVar5;
      }
      pcRam_? = pcVar4;
      iVar8 = (*pcRam_?)(pvVar3);
      return (float)(iVar8 + iVar7);
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar5 = (float)(*pcVar4)();
  return fVar5;
}


/* Void set_Position(Vector2) */

void Assembly-CSharp.dll::TextBubble::TextBubble_set_Position
               (TextBubble *this,Vector2 value,MethodInfo *method)

{
  obj = (this->fields).tail;
  if (obj == (RectTransform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
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
  pvVar2 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar2);
  TextBubble_RecalcPositionWithScreenCollision(this,(MethodInfo *)0x0);
  return;
}

