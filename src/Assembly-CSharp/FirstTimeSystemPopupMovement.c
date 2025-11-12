
/* Void SetControl(KogamaControls) */

void Assembly-CSharp.dll::FirstTimeSystemPopupMovement::FirstTimeSystemPopupMovement_SetControl
               (FirstTimeSystemPopupMovement *this,KogamaControls__Enum control,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovement::ControlImage>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovement::ControlImage>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovement::ControlImage>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).controlImages;
  if (pLVar1 == (List_1_FirstTimeSystemPopupMovement_ControlImage_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = (pLVar1->fields)._size - 1;
  if (-1 < (int)uVar3) {
    pLVar1 = (this->fields).controlImages;
    lVar4 = (longlong)(int)uVar3;
    lVar5 = lVar4 * 0x18;
    do {
      if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
      pFVar6 = (pLVar1->fields)._items;
      if (pFVar6 == (FirstTimeSystemPopupMovement_ControlImage__Array *)0x0)
      goto code_?;
      if ((uint)pFVar6->max_length <= uVar3) goto code_?;
      pGStack_7 = *(GameObject **)((longlong)&pFVar6->vector[0].checkMark + lVar5);
      if (control == *(KogamaControls__Enum *)((longlong)&pFVar6->vector[0].key + lVar5)) {
        if (pLVar1 == (List_1_FirstTimeSystemPopupMovement_ControlImage_ *)0x0)
        goto code_?;
        if ((uint)(pLVar1->fields)._size <= uVar3) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (pFVar6 == (FirstTimeSystemPopupMovement_ControlImage__Array *)0x0)
        goto code_?;
        if (uVar3 < (uint)pFVar6->max_length) {
          pGStack_7 = pFVar6->vector[(int)uVar3].checkMark;
          pIVar8 = pFVar6->vector[(int)uVar3].control;
          if (pIVar8 == (Image *)0x0) goto code_?;
          fStack_9 = (this->fields).deactivated.r;
          fStack_10 = (this->fields).deactivated.g;
          fStack_11 = (this->fields).deactivated.b;
          fStack_12 = (this->fields).deactivated.a;
          (*(pIVar8->klass->vtable).set_color.methodPtr)(pIVar8,&fStack_9);
          pLVar1 = (this->fields).controlImages;
          if (pLVar1 == (List_1_FirstTimeSystemPopupMovement_ControlImage_ *)0x0)
          goto code_?;
          if ((uint)(pLVar1->fields)._size <= uVar3) goto code_?;
          pFVar6 = (pLVar1->fields)._items;
          if (pFVar6 == (FirstTimeSystemPopupMovement_ControlImage__Array *)0x0)
          goto code_?;
          if (uVar3 < (uint)pFVar6->max_length) {
            pGStack_7 = pFVar6->vector[(int)uVar3].checkMark;
            if (pGStack_7 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGStack_7,1,(MethodInfo *)0x0);
              pLVar1 = (this->fields).controlImages;
              if (pLVar1 != (List_1_FirstTimeSystemPopupMovement_ControlImage_ *)0x0) {
                if ((uint)(pLVar1->fields)._size <= uVar3) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                iVar13 = (pLVar1->fields)._size + -1;
                (pLVar1->fields)._size = iVar13;
                if ((int)uVar3 < iVar13) {
                  pFVar6 = (pLVar1->fields)._items;
                  mscorlib.dll::System::Array::Array_Copy_3
                            ((Array *)pFVar6,uVar3 + 1,(Array *)pFVar6,uVar3,iVar13 - uVar3,
                             (MethodInfo *)0x0);
                }
                pFVar6 = (pLVar1->fields)._items;
                pGStack_7 = (GameObject *)0x0;
                if (pFVar6 == (FirstTimeSystemPopupMovement_ControlImage__Array *)0x0) {
                  FUN_?();
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                uVar3 = (pLVar1->fields)._size;
                if ((uint)pFVar6->max_length <= uVar3) {
                  FUN_?();
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                bVar14 = iRam_? != 0;
                piVar15 = &pFVar6->vector[(int)uVar3].key;
                *(undefined8 *)piVar15 = 0;
                *(Image **)(piVar15 + 2) = (Image *)0x0;
                pFVar6->vector[(int)uVar3].checkMark = (GameObject *)0x0;
                if (bVar14) {
                  uVar3 = (uint)((ulonglong)&pFVar6->vector[(int)uVar3].control >> 0xc);
                  puVar16 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
                  do {
                    uVar17 = *puVar16;
                    LOCK();
                    uVar18 = *puVar16;
                    if (uVar17 == uVar18) {
                      *puVar16 = uVar17 | 1L << (uVar3 & 0x3f);
                    }
                    UNLOCK();
                  } while (uVar17 != uVar18);
                }
                piVar15 = &(pLVar1->fields)._version;
                *piVar15 = *piVar15 + 1;
                return;
              }
            }
            goto code_?;
          }
        }
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar3 = uVar3 - 1;
      lVar5 = lVar5 + -0x18;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FirstTimeSystemPopupMovement::FirstTimeSystemPopupMovement_Update
               (FirstTimeSystemPopupMovement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeSystemPopupMovement____c___Update_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeSystemPopupMovement____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_EditMoveForward,KeyState__Enum_Down,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    FirstTimeSystemPopupMovement_SetControl
              (this,KogamaControls__Enum_EditMoveForward,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_EditMoveLeft,KeyState__Enum_Down,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    FirstTimeSystemPopupMovement_SetControl
              (this,KogamaControls__Enum_EditMoveLeft,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_EditMoveRight,KeyState__Enum_Down,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    FirstTimeSystemPopupMovement_SetControl
              (this,KogamaControls__Enum_EditMoveRight,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_EditMoveBackwards,KeyState__Enum_Down,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    FirstTimeSystemPopupMovement_SetControl
              (this,KogamaControls__Enum_EditMoveBackwards,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovement::ControlImage>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).controlImages;
  if (pLVar2 == (List_1_FirstTimeSystemPopupMovement_ControlImage_ *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((pLVar2->fields)._size == 0) {
    fVar4 = (this->fields).currentFade;
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    fVar6 = (float)(*pcRam_?)();
    this_00 = (this->fields).group;
    fVar6 = fVar6 + fVar4;
    (this->fields).currentFade = fVar6;
    if (this_00 == (CanvasGroup *)0x0) goto code_?;
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,_UNK_? - fVar6 / (this->fields).fadeDuration,(MethodInfo *)0x0);
    if ((this->fields).fadeDuration <= (this->fields).currentFade) {
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__FirstTimeSystemPopupMovement____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__FirstTimeSystemPopupMovement____c);
      }
      this_01 = TypeInfo__FirstTimeSystemPopupMovement____c->static_fields->__9__9_0;
      if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__FirstTimeSystemPopupMovement____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__FirstTimeSystemPopupMovement____c);
        }
        object = TypeInfo__FirstTimeSystemPopupMovement____c->static_fields->__9;
        this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                   MethodInfo__FirstTimeSystemPopupMovement____c___Update_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__FirstTimeSystemPopupMovement____c->static_fields->__9__9_0 = this_01;
        func_?(&TypeInfo__FirstTimeSystemPopupMovement____c->static_fields->__9__9_0);
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
  }
  return;
}


/* Boolean get_IsFinished() */

bool Assembly-CSharp.dll::FirstTimeSystemPopupMovement::FirstTimeSystemPopupMovement_get_IsFinished
               (FirstTimeSystemPopupMovement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<FirstTimeSystemPopupMovement::ControlImage>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).controlImages;
  if (pLVar1 != (List_1_FirstTimeSystemPopupMovement_ControlImage_ *)0x0) {
    return (pLVar1->fields)._size == 0;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}

