
/* Void ChangeState(XPBoostNotification+XPBoostStateType) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_ChangeState
               (XPBoostNotification *this,XPBoostNotification_XPBoostStateType__Enum newState,
               MethodInfo *method)

{
  pcVar1 = pcRam_?;
  (this->fields).currentState = (uint8_t)newState;
  pcVar2 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar2 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcVar1)();
  (this->fields).stateStartTime = fVar4;
  return;
}


/* Void CloseNotification() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_CloseNotification
               (XPBoostNotification *this,MethodInfo *method)

{
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pGVar1->fields)._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    cVar5 = (*pcRam_?)(pvVar2);
    if (cVar5 != '\0') {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
    }
    this_00 = (this->fields)._.pool;
    if (this_00 != (NotificationObjectPool *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<Notification>__Add_Notification_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((this != (XPBoostNotification *)0x0) &&
         (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0))
      {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar2 = (pGVar1->fields)._.m_CachedPtr;
        if (pvVar2 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        cVar5 = (*pcRam_?)(pvVar2);
        if (cVar5 != '\0') {
          pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this,(MethodInfo *)0x0);
          if (pGVar1 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,0,(MethodInfo *)0x0);
        }
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_00,(MethodInfo *)0x0);
        if (this_01 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_01,parent,1,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<Notification>__Remove_Notification_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pLVar6 = (this_00->fields).ActiveInstances;
          if (pLVar6 != (List_1_Notification_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Remove
                      ((List_1_System_Object_ *)pLVar6,(Object *)this,
                       MethodInfo__System__Collections__Generic__List<Notification>__Remove_Notification_
                      );
            if ((this_00->fields).OnActiveInstancesChanged != (Action *)0x0) {
              pAVar7 = (this_00->fields).OnActiveInstancesChanged;
              (*(pAVar7->fields)._._.invoke_impl)
                        ((pAVar7->fields)._._.method_code,(pAVar7->fields)._._.method);
            }
            pMVar8 = MethodInfo__System__Collections__Generic__List<Notification>__Add_Notification_
            ;
            pLVar6 = (this_00->fields).Instances;
            if (pLVar6 != (List_1_Notification_ *)0x0) {
              pNVar9 = (pLVar6->fields)._items;
              piVar10 = &(pLVar6->fields)._version;
              *piVar10 = *piVar10 + 1;
              if (pNVar9 == (Notification__Array *)0x0) {
                FUN_?();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar11 = (pLVar6->fields)._size;
              if (uVar11 < (uint)pNVar9->max_length) {
                (pLVar6->fields)._size = uVar11 + 1;
              }
              else {
                uVar11 = (pLVar6->fields)._size;
                FUN_?(pLVar6,uVar11 + 1,
                              (pMVar8->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                              rgctxDataDummy,pNVar9,unaff_RDI);
                pNVar9 = (pLVar6->fields)._items;
                (pLVar6->fields)._size = uVar11 + 1;
                if (pNVar9 == (Notification__Array *)0x0) {
                  FUN_?();
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              if ((uint)pNVar9->max_length <= uVar11) {
                FUN_?();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              bVar12 = iRam_? != 0;
              pNVar9->vector[(int)uVar11] = (Notification *)this;
              if (bVar12) {
                uVar11 = (uint)((ulonglong)(pNVar9->vector + (int)uVar11) >> 0xc);
                puVar13 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
                do {
                  uVar14 = *puVar13;
                  LOCK();
                  uVar15 = *puVar13;
                  if (uVar14 == uVar15) {
                    *puVar13 = uVar14 | 1L << (uVar11 & 0x3f);
                  }
                  UNLOCK();
                } while (uVar14 != uVar15);
              }
              return;
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void CloseNotification(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_CloseNotification_1
               (XPBoostNotification *this,float stateProgress,MethodInfo *method)

{
  pAVar1 = (this->fields).closeShrinkXEffectCurve;
  if (pAVar1 != (AnimationCurve *)0x0) {
    pvVar2 = (pAVar1->fields).m_Ptr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    fVar5 = (float)(*pcRam_?)(pvVar2,stateProgress);
    pAVar1 = (this->fields).closeShrinkYEffectCurve;
    fVar6 = (this->fields).backgroundOriginalWidth;
    fVar7 = (this->fields).backgroundOriginalWidth;
    if (pAVar1 != (AnimationCurve *)0x0) {
      pvVar2 = (pAVar1->fields).m_Ptr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      fVar8 = (float)(*pcRam_?)(pvVar2,stateProgress);
      obj = (this->fields).backGround;
      if (obj != (RectTransform *)0x0) {
        auStack_9[0] =
             CONCAT44((fVar8 * (this->fields).backgroundOriginalHeigt -
                      (this->fields).backgroundOriginalHeigt) +
                      (this->fields).backgroundOriginalSizeDelta.y,
                      (fVar5 * fVar6 - fVar7) + (this->fields).backgroundOriginalSizeDelta.x);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                        ,auStack_9[0],0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (RectTransform *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pvVar2 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar2 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar2,auStack_9);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void FadeOut(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_FadeOut
               (XPBoostNotification *this,float stateProgress,MethodInfo *method)

{
  obj = (this->fields).backgroundCanvasGroup;
  obj_00 = (this->fields).fadeOutCurve;
  uVar1 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar2 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (obj_00 != (AnimationCurve *)0x0) {
    pvVar3 = (obj_00->fields).m_Ptr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?,in_RDX,method,in_R9,uVar1,uVar2),
       pcVar4 == (code *)0x0)) {
      uVar1 = func_?(&UNK_?);
      FUN_?(uVar1,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    uVar5 = (*pcRam_?)(pvVar3,stateProgress);
    if (obj != (CanvasGroup *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                      ,uVar5,0,in_R9,uVar1,uVar2,unaff_RBX);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (CanvasGroup *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pvVar3 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar1 = func_?(&UNK_?);
        FUN_?(uVar1,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,uVar5);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleClosingDownState(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_HandleClosingDownState
               (XPBoostNotification *this,float currentStateTime,MethodInfo *method)

{
  XPBoostNotification_UpdateBoostTextEffect(this,currentStateTime,(MethodInfo *)0x0);
  XPBoostNotification_FadeOut(this,currentStateTime,(MethodInfo *)0x0);
  XPBoostNotification_CloseNotification_1(this,currentStateTime,(MethodInfo *)0x0);
  if (_UNK_? < currentStateTime) {
    XPBoostNotification_CloseNotification(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void HandleHighlightState(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_HandleHighlightState
               (XPBoostNotification *this,float currentStateTime,MethodInfo *method)

{
  if (0 < (this->fields).currentMemberBeingHighlighted) {
    XPBoostNotification_UpdateBoostTextEffect(this,currentStateTime,(MethodInfo *)0x0);
    XPBoostNotification_SlideOutName(this,currentStateTime,(MethodInfo *)0x0);
    XPBoostNotification_SlideInName(this,currentStateTime,(MethodInfo *)0x0);
  }
  if (TypeRef__System__Activator__T._0_4_ < currentStateTime) {
    XPBoostNotification_StartNextState(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void HandleStartState(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_HandleStartState
               (XPBoostNotification *this,float currentStateTime,MethodInfo *method)

{
  XPBoostNotification_UpdateBoostTextEffect
            (this,currentStateTime - _UNK_?,(MethodInfo *)0x0);
  fVar1 = _UNK_?;
  XPBoostNotification_FadeOut(this,_UNK_? - currentStateTime,(MethodInfo *)0x0);
  XPBoostNotification_CloseNotification_1(this,fVar1 - currentStateTime,(MethodInfo *)0x0);
  if (_UNK_? < currentStateTime) {
    XPBoostNotification_StartNextState(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void HandleState() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_HandleState
               (XPBoostNotification *this,MethodInfo *method)

{
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
  fVar3 = (float)(*pcRam_?)();
  fVar3 = fVar3 - (this->fields).stateStartTime;
  switch((this->fields).currentState) {
  case 1:
    pGVar4 = (this->fields).content;
    if (pGVar4 == (GameObject *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar5 = (pGVar4->fields)._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar4,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
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
    cVar6 = (*pcRam_?)(pvVar5);
    if (cVar6 != '\0') {
      pGVar4 = (this->fields).content;
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
    }
    pcVar1 = pcRam_?;
    if (_UNK_? < fVar3) {
      (this->fields).currentState = 2;
      pcVar7 = pcRam_?;
      if ((pcVar1 == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar7 = pcVar1, pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar7;
      fVar3 = (float)(*pcVar1)();
      pGVar4 = (this->fields).content;
      (this->fields).stateStartTime = fVar3;
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,1,(MethodInfo *)0x0);
      (*(this->klass->vtable).Update.methodPtr)(this,(this->klass->vtable).Update.method);
    }
    break;
  case 2:
    XPBoostNotification_UpdateBoostTextEffect(this,fVar3 - _UNK_?,(MethodInfo *)0x0);
    fVar8 = _UNK_?;
    XPBoostNotification_FadeOut(this,_UNK_? - fVar3,(MethodInfo *)0x0);
    XPBoostNotification_CloseNotification_1(this,fVar8 - fVar3,(MethodInfo *)0x0);
    if (fVar3 <= _UNK_?) {
      return;
    }
code_?:
    XPBoostNotification_StartNextState(this,(MethodInfo *)0x0);
    return;
  case 3:
    if (0 < (this->fields).currentMemberBeingHighlighted) {
      XPBoostNotification_UpdateBoostTextEffect(this,fVar3,(MethodInfo *)0x0);
      XPBoostNotification_SlideOutName(this,fVar3,(MethodInfo *)0x0);
      XPBoostNotification_SlideInName(this,fVar3,(MethodInfo *)0x0);
    }
    if (TypeRef__System__Activator__T._0_4_ < fVar3) goto code_?;
    break;
  case 4:
    XPBoostNotification_UpdateBoostTextEffect(this,fVar3,(MethodInfo *)0x0);
    XPBoostNotification_FadeOut(this,fVar3,(MethodInfo *)0x0);
    XPBoostNotification_CloseNotification_1(this,fVar3,(MethodInfo *)0x0);
    if (_UNK_? < fVar3) {
      XPBoostNotification_CloseNotification(this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


/* Void HandleWaitBeforeStart(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_HandleWaitBeforeStart
               (XPBoostNotification *this,float currentStateTime,MethodInfo *method)

{
  pGVar1 = (this->fields).content;
  if (pGVar1 == (GameObject *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (pGVar1->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
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
  cVar5 = (*pcRam_?)(pvVar3);
  if (cVar5 != '\0') {
    pGVar1 = (this->fields).content;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
  }
  pcVar2 = pcRam_?;
  if (_UNK_? < currentStateTime) {
    (this->fields).currentState = 2;
    pcVar6 = pcRam_?;
    if ((pcVar2 == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar6 = pcVar2, pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar6;
    fVar7 = (float)(*pcVar2)();
    pGVar1 = (this->fields).content;
    (this->fields).stateStartTime = fVar7;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    (*(this->klass->vtable).Update.methodPtr)(this,(this->klass->vtable).Update.method);
  }
  return;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_Initialize
               (XPBoostNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__Add_MVPlayer_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOStackX_20 = (Object *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
     (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
     pMVar4 != (MVLocalPlayer *)0x0)) {
    iVar5 = (pMVar4->fields)._._ActorNr_k__BackingField;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       ((pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0 &&
        (pDVar6 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar3,(MethodInfo *)0x0),
        pDVar6 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)))) {
      pDStack_7 = (pDVar6->fields)._dictionary;
      uStack_8 = 0;
      uStack_9 = 0;
      if (iRam_? != 0) {
        uVar10 = (uint)((ulonglong)&pDStack_7 >> 0xc);
        uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
        do {
          uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
          puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
          LOCK();
          bVar14 = uVar12 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      if (pDStack_7 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
        FUN_?();
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      uStack_8 = (ulonglong)(uint)(pDStack_7->fields)._version << 0x20;
      uStack_9 = 0;
      uStack_16 = uStack_8;
      pMStack_17 = (MVPlayer *)0x0;
      pDStack_18 = pDStack_7;
      while (pDStack_18 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
        if (uStack_16._4_4_ != (pDStack_18->fields)._version) goto code_?;
        uVar11 = uStack_16 & 0xffffffff;
        do {
          if (pDStack_18 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
          uVar10 = (uint)uVar11;
          if ((uint)(pDStack_18->fields)._count <= uVar10) {
            uStack_16 = CONCAT44(uStack_16._4_4_,(pDStack_18->fields)._count + 1);
            pMStack_17 = (MVPlayer *)0x0;
            pLVar19 = (this->fields).memberList;
            if (pLVar19 != (List_1_MVPlayer_ *)0x0) {
              if ((pLVar19->fields)._size < 1) {
                XPBoostNotification_CloseNotification(this,(MethodInfo *)0x0);
                return;
              }
              (this->fields).currentMemberBeingHighlighted = 0;
              pTVar20 = (this->fields).UserNameText1;
              if (pLVar19 != (List_1_MVPlayer_ *)0x0) {
                if ((pLVar19->fields)._size == 0) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                pMVar21 = (pLVar19->fields)._items;
                if (pMVar21 != (MVPlayer__Array *)0x0) {
                  if ((int)pMVar21->max_length == 0) {
                    FUN_?();
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  if (((pMVar21->vector[0] != (MVPlayer *)0x0) &&
                      (pUVar22 = (pMVar21->vector[0]->fields)._UserProfileData_k__BackingField,
                      pUVar22 != (UserProfileData *)0x0)) && (pTVar20 != (Text *)0x0)) {
                    (*(pTVar20->klass->vtable).set_text.methodPtr)
                              (pTVar20,(pUVar22->fields).UserName,
                               (pTVar20->klass->vtable).set_text.method);
                    pLVar19 = (this->fields).memberList;
                    if (pLVar19 != (List_1_MVPlayer_ *)0x0) {
                      fVar23 = (float)(pLVar19->fields)._size;
                      (this->fields)._.timeSinceStart =
                           (this->fields)._.timeSinceStart -
                           (fVar23 + fVar23 + _UNK_? + _UNK_?);
                      pRVar24 = (this->fields).backGround;
                      if (pRVar24 != (RectTransform *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        if ((pRVar24->fields)._._._.m_CachedPtr == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pRVar24,(MethodInfo *)0x0);
                          pcVar15 = (code *)swi(3);
                          (*pcVar15)();
                          return;
                        }
                        pcVar15 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)
                           ) {
                          uVar25 = func_?(&UNK_?);
                          FUN_?(uVar25,0);
                          pcVar15 = (code *)swi(3);
                          (*pcVar15)();
                          return;
                        }
                        pcRam_? = pcVar15;
                        (*pcRam_?)();
                        (this->fields).backgroundOriginalWidth = 0.0;
                        pRVar24 = (this->fields).backGround;
                        if (pRVar24 != (RectTransform *)0x0) {
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pDStack_7 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
                          uStack_8 = 0;
                          if ((pRVar24->fields)._._._.m_CachedPtr == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pRVar24,(MethodInfo *)0x0);
                            pcVar15 = (code *)swi(3);
                            (*pcVar15)();
                            return;
                          }
                          pcVar15 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar15 = (code *)FUN_?(&UNK_?),
                             pcVar15 == (code *)0x0)) {
                            uVar25 = func_?(&UNK_?);
                            FUN_?(uVar25,0);
                            pcVar15 = (code *)swi(3);
                            (*pcVar15)();
                            return;
                          }
                          pcRam_? = pcVar15;
                          (*pcRam_?)();
                          (this->fields).backgroundOriginalHeigt = uStack_8._4_4_;
                          pRVar24 = (this->fields).backGround;
                          if (pRVar24 != (RectTransform *)0x0) {
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pvVar26 = (pRVar24->fields)._._._.m_CachedPtr;
                            if (pvVar26 == (void *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException
                                        ((Object *)pRVar24,(MethodInfo *)0x0);
                              pcVar15 = (code *)swi(3);
                              (*pcVar15)();
                              return;
                            }
                            pcVar15 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar15 = (code *)FUN_?(&UNK_?),
                               pcVar15 == (code *)0x0)) {
                              uVar25 = func_?(&UNK_?);
                              FUN_?(uVar25,0);
                              pcVar15 = (code *)swi(3);
                              (*pcVar15)();
                              return;
                            }
                            pcRam_? = pcVar15;
                            (*pcRam_?)(pvVar26);
                            (this->fields).backgroundOriginalSizeDelta.x = 0.0;
                            (this->fields).backgroundOriginalSizeDelta.y = 0.0;
                            XPBoostNotification_UpdateBoostAmount(this,(MethodInfo *)0x0);
                            (this->fields).currentState = 1;
                            pcVar15 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar15 = (code *)FUN_?(&UNK_?),
                               pcVar15 == (code *)0x0)) {
                              uVar25 = func_?(&UNK_?);
                              FUN_?(uVar25,0);
                              pcVar15 = (code *)swi(3);
                              (*pcVar15)();
                              return;
                            }
                            pcRam_? = pcVar15;
                            fVar23 = (float)(*pcRam_?)();
                            (this->fields).stateStartTime = fVar23;
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto code_?;
          }
          pDVar27 = (pDStack_18->fields)._entries;
          uVar11 = (ulonglong)(uVar10 + 1);
          uStack_16 = CONCAT44(uStack_16._4_4_,uVar10 + 1);
          if (pDVar27 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0)
          goto code_?;
          if ((uint)pDVar27->max_length <= uVar10) goto code_?;
        } while (pDVar27->vector[(int)uVar10].hashCode < 0);
        pMStack_17 = pDVar27->vector[(int)uVar10].value;
        func_?();
        pMVar28 = pMStack_17;
        if ((pMStack_17 != (MVPlayer *)0x0) &&
           ((pMStack_17->fields)._ActorNr_k__BackingField != iVar5)) {
          pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
          pMVar3 = (pMVar2->fields).playerContainer;
          key = (pMVar28->fields)._ActorNr_k__BackingField;
          if (pMVar3 == (MVPlayerContainer *)0x0) goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_00 = (pMVar3->fields).players;
          if (this_00 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
          bVar29 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__TryGetValue
                             ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,&pOStackX_20,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                             );
          if (bVar29 != 0) {
            if (pOStackX_20 == (Object *)0x0) goto code_?;
            if ((SubscriptionRulesWrapper *)pOStackX_20[7].monitor ==
                (SubscriptionRulesWrapper *)0x0) goto code_?;
            bVar29 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                     SubscriptionRulesWrapper_HasBenefit
                               ((SubscriptionRulesWrapper *)pOStackX_20[7].monitor,
                                SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
            if (bVar29 != 0) {
              pLVar19 = (this->fields).memberList;
              if (pLVar19 == (List_1_MVPlayer_ *)0x0) goto code_?;
              FUN_?(pLVar19,pOStackX_20);
            }
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Boolean IsMemberHighlightingDone() */

bool Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_IsMemberHighlightingDone
               (XPBoostNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).memberList;
  if (pLVar1 != (List_1_MVPlayer_ *)0x0) {
    return (pLVar1->fields)._size == (this->fields).currentMemberBeingHighlighted + 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void SlideInName(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_SlideInName
               (XPBoostNotification *this,float stateProgress,MethodInfo *method)

{
  if (((this->fields).currentMemberBeingHighlighted & 1) == 0) {
    pTVar1 = (this->fields).UserNameText1;
    if ((pTVar1 == (Text *)0x0) ||
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar1,(MethodInfo *)0x0), pTVar2 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = 0;
    uStack_4 = 0;
    pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    pTVar1 = (this->fields).UserNameText2;
    if ((pTVar1 == (Text *)0x0) ||
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar1,(MethodInfo *)0x0), pTVar2 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = 0;
    uStack_4 = 0;
    pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar5);
  uVar8 = uStack_4;
  uStack_9 = uStack_3;
  obj = (this->fields).slideUserNameInCurve;
  if (obj == (AnimationCurve *)0x0) {
code_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pvVar5 = (obj->fields).m_Ptr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
  uVar10 = (*pcRam_?)(pvVar5,stateProgress);
  if (((this->fields).currentMemberBeingHighlighted & 1) != 0) {
    pTVar1 = (this->fields).UserNameText2;
    if (pTVar1 != (Text *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        uStack_3 = CONCAT44(uStack_9._4_4_,uVar10);
        uStack_4 = uVar8;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
code_?:
        pcRam_? = pcVar6;
        (*pcRam_?)(pvVar5,&uStack_3);
        return;
      }
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar1 = (this->fields).UserNameText1;
  if (pTVar1 != (Text *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      uStack_3 = CONCAT44(uStack_9._4_4_,uVar10);
      uStack_4 = uVar8;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SlideOutName(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_SlideOutName
               (XPBoostNotification *this,float stateProgress,MethodInfo *method)

{
  if (((this->fields).currentMemberBeingHighlighted & 1) == 0) {
    pTVar1 = (this->fields).UserNameText2;
    if ((pTVar1 == (Text *)0x0) ||
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar1,(MethodInfo *)0x0), pTVar2 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = 0;
    uStack_4 = 0;
    pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    pTVar1 = (this->fields).UserNameText1;
    if ((pTVar1 == (Text *)0x0) ||
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar1,(MethodInfo *)0x0), pTVar2 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = 0;
    uStack_4 = 0;
    pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar5);
  uVar8 = uStack_4;
  uStack_9 = uStack_3;
  obj = (this->fields).slideUserNameOutCurve;
  if (obj == (AnimationCurve *)0x0) {
code_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pvVar5 = (obj->fields).m_Ptr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
  uVar10 = (*pcRam_?)(pvVar5,stateProgress);
  if (((this->fields).currentMemberBeingHighlighted & 1) != 0) {
    pTVar1 = (this->fields).UserNameText1;
    if (pTVar1 != (Text *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        uStack_3 = CONCAT44(uStack_9._4_4_,uVar10);
        uStack_4 = uVar8;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
code_?:
        pcRam_? = pcVar6;
        (*pcRam_?)(pvVar5,&uStack_3);
        return;
      }
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar1 = (this->fields).UserNameText2;
  if (pTVar1 != (Text *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      uStack_3 = CONCAT44(uStack_9._4_4_,uVar10);
      uStack_4 = uVar8;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void StartNewMemberHighlight() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_StartNewMemberHighlight
               (XPBoostNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).currentMemberBeingHighlighted;
  pLVar2 = (this->fields).memberList;
  uVar3 = iVar1 + 1;
  (this->fields).currentMemberBeingHighlighted = uVar3;
  if ((uVar3 & 1) == 0) {
    pTVar4 = (this->fields).UserNameText1;
    if (pLVar2 == (List_1_MVPlayer_ *)0x0) goto code_?;
    if ((uint)(pLVar2->fields)._size <= uVar3) goto code_?;
    pMVar5 = (pLVar2->fields)._items;
    if (pMVar5 == (MVPlayer__Array *)0x0) goto code_?;
    uVar6 = (uint)pMVar5->max_length;
  }
  else {
    pTVar4 = (this->fields).UserNameText2;
    if (pLVar2 == (List_1_MVPlayer_ *)0x0) goto code_?;
    if ((uint)(pLVar2->fields)._size <= uVar3) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pMVar5 = (pLVar2->fields)._items;
    if (pMVar5 == (MVPlayer__Array *)0x0) goto code_?;
    uVar6 = (uint)pMVar5->max_length;
  }
  if (uVar6 <= uVar3) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((pMVar5->vector[(longlong)iVar1 + 1] != (MVPlayer *)0x0) &&
      (pUVar8 = (pMVar5->vector[(longlong)iVar1 + 1]->fields)._UserProfileData_k__BackingField,
      pUVar8 != (UserProfileData *)0x0)) && (pTVar4 != (Text *)0x0)) {
    (*(pTVar4->klass->vtable).set_text.methodPtr)
              (pTVar4,(pUVar8->fields).UserName,(pTVar4->klass->vtable).set_text.method);
    if (cRam_? == '\0') {
      FUN_?(&
                    MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&::StringLiteral__);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral____XP);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar9 != (MVGameControllerBase *)0x0) &&
         (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
        ((this_00 = (pMVar10->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0 &&
         ((pMVar11 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0)
          , pMVar11 != (MVLocalPlayer *)0x0 &&
          (this_01 = (pMVar11->fields)._._SubscriptionRules_k__BackingField,
          this_01 != (SubscriptionRulesWrapper *)0x0)))))) &&
       (this_02 = (XpBooster *)
                  MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                  SubscriptionRulesWrapper_GetRule
                            (this_01,SubscriptionBenefit__Enum_XPBoost,
                             MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                            ), this_02 != (XpBooster *)0x0)) {
      value = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::XpBooster::
              XpBooster_GetTotalXPBoost
                        (this_02,(this->fields).currentMemberBeingHighlighted + 1,(MethodInfo *)0x0)
      ;
      pTVar4 = (this->fields).boostAmountText;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      aRStack_12[0]._pointer._value = (void *)0x0;
      aRStack_12[0]._length = 0;
      aRStack_12[0]._12_4_ = 0;
      pSVar13 = mscorlib.dll::System::Number::Number_FormatInt32
                          (value,aRStack_12,(IFormatProvider *)0x0,(MethodInfo *)0x0);
      pSVar13 = mscorlib.dll::System::String::String_Concat_5
                          (::StringLiteral__,pSVar13,StringLiteral____XP,(MethodInfo *)0x0);
      if (pTVar4 != (Text *)0x0) {
        UNRECOVERED_JUMPTABLE = (pTVar4->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (pTVar4,pSVar13,(pTVar4->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
        return;
      }
    }
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void StartNextState() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_StartNextState
               (XPBoostNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  pLVar2 = (this->fields).memberList;
  if (pLVar2 != (List_1_MVPlayer_ *)0x0) {
    if ((pLVar2->fields)._size == (this->fields).currentMemberBeingHighlighted + 1) {
      (this->fields).currentState = 4;
      pcVar3 = pcRam_?;
      if ((pcVar1 == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar3 = pcVar1, pcVar1 == (code *)0x0)
         ) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar3;
      fVar5 = (float)(*pcVar1)();
      (this->fields).stateStartTime = fVar5;
      return;
    }
    (this->fields).currentState = 3;
    pcVar3 = pcRam_?;
    if ((pcVar1 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar3 = pcVar1, pcVar1 == (code *)0x0))
    {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar3;
    fVar5 = (float)(*pcVar1)();
    bVar6 = cRam_? == '\0';
    (this->fields).stateStartTime = fVar5;
    if (bVar6) {
      FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Item_int_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    iVar7 = (this->fields).currentMemberBeingHighlighted;
    pLVar2 = (this->fields).memberList;
    uVar8 = iVar7 + 1;
    (this->fields).currentMemberBeingHighlighted = uVar8;
    if ((uVar8 & 1) == 0) {
      pTVar9 = (this->fields).UserNameText1;
      if (pLVar2 == (List_1_MVPlayer_ *)0x0) goto code_?;
      if ((uint)(pLVar2->fields)._size <= uVar8) goto code_?;
      pMVar10 = (pLVar2->fields)._items;
      if (pMVar10 == (MVPlayer__Array *)0x0) goto code_?;
      uVar11 = (uint)pMVar10->max_length;
    }
    else {
      pTVar9 = (this->fields).UserNameText2;
      if (pLVar2 == (List_1_MVPlayer_ *)0x0) goto code_?;
      if ((uint)(pLVar2->fields)._size <= uVar8) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pMVar10 = (pLVar2->fields)._items;
      if (pMVar10 == (MVPlayer__Array *)0x0) goto code_?;
      uVar11 = (uint)pMVar10->max_length;
    }
    if (uVar11 <= uVar8) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((pMVar10->vector[(longlong)iVar7 + 1] != (MVPlayer *)0x0) &&
        (pUVar12 = (pMVar10->vector[(longlong)iVar7 + 1]->fields)._UserProfileData_k__BackingField,
        pUVar12 != (UserProfileData *)0x0)) && (pTVar9 != (Text *)0x0)) {
      (*(pTVar9->klass->vtable).set_text.methodPtr)
                (pTVar9,(pUVar12->fields).UserName,(pTVar9->klass->vtable).set_text.method);
      if (cRam_? == '\0') {
        FUN_?(&
                      MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&::StringLiteral__);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral____XP);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar13 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar13 != (MVGameControllerBase *)0x0) &&
           (pMVar14 = (pMVar13->fields).game, pMVar14 != (MVNetworkGame *)0x0)) &&
          ((this_00 = (pMVar14->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0 &&
           ((pMVar15 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                 (this_00,(MethodInfo *)0x0), pMVar15 != (MVLocalPlayer *)0x0 &&
            (this_01 = (pMVar15->fields)._._SubscriptionRules_k__BackingField,
            this_01 != (SubscriptionRulesWrapper *)0x0)))))) &&
         (this_02 = (XpBooster *)
                    MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                    SubscriptionRulesWrapper_GetRule
                              (this_01,SubscriptionBenefit__Enum_XPBoost,
                               MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                              ), this_02 != (XpBooster *)0x0)) {
        value = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::XpBooster::
                XpBooster_GetTotalXPBoost
                          (this_02,(this->fields).currentMemberBeingHighlighted + 1,
                           (MethodInfo *)0x0);
        pTVar9 = (this->fields).boostAmountText;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Number);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
             field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        aRStack_16[0]._pointer._value = (void *)0x0;
        aRStack_16[0]._length = 0;
        aRStack_16[0]._12_4_ = 0;
        pSVar17 = mscorlib.dll::System::Number::Number_FormatInt32
                            (value,aRStack_16,(IFormatProvider *)0x0,(MethodInfo *)0x0);
        pSVar17 = mscorlib.dll::System::String::String_Concat_5
                            (::StringLiteral__,pSVar17,StringLiteral____XP,(MethodInfo *)0x0);
        if (pTVar9 != (Text *)0x0) {
          UNRECOVERED_JUMPTABLE = (pTVar9->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)
                    (pTVar9,pSVar17,(pTVar9->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
          return;
        }
      }
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SwapMemberName(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_SwapMemberName
               (XPBoostNotification *this,float stateProgress,MethodInfo *method)

{
  XPBoostNotification_SlideOutName(this,stateProgress,(MethodInfo *)0x0);
  if (((this->fields).currentMemberBeingHighlighted & 1) == 0) {
    pTVar1 = (this->fields).UserNameText1;
    if ((pTVar1 == (Text *)0x0) ||
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar1,(MethodInfo *)0x0), pTVar2 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = 0;
    uStack_4 = 0;
    pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    pTVar1 = (this->fields).UserNameText2;
    if ((pTVar1 == (Text *)0x0) ||
       (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar1,(MethodInfo *)0x0), pTVar2 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = 0;
    uStack_4 = 0;
    pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(pvVar5);
  uVar8 = uStack_4;
  uStack_9 = uStack_3;
  obj = (this->fields).slideUserNameInCurve;
  if (obj == (AnimationCurve *)0x0) {
code_?:
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pvVar5 = (obj->fields).m_Ptr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
  uVar10 = (*pcRam_?)(pvVar5,stateProgress);
  if (((this->fields).currentMemberBeingHighlighted & 1) != 0) {
    pTVar1 = (this->fields).UserNameText2;
    if (pTVar1 != (Text *)0x0) {
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar1,(MethodInfo *)0x0);
      if (pTVar2 != (Transform *)0x0) {
        uStack_3 = CONCAT44(uStack_9._4_4_,uVar10);
        uStack_4 = uVar8;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
code_?:
        pcRam_? = pcVar6;
        (*pcRam_?)(pvVar5,&uStack_3);
        return;
      }
    }
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar1 = (this->fields).UserNameText1;
  if (pTVar1 != (Text *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      uStack_3 = CONCAT44(uStack_9._4_4_,uVar10);
      uStack_4 = uVar8;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto code_?;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_Update
               (XPBoostNotification *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?,0), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  fVar3 = fVar3 - (this->fields).stateStartTime;
  switch((this->fields).currentState) {
  case 1:
    pGVar4 = (this->fields).content;
    if (pGVar4 == (GameObject *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar5 = (pGVar4->fields)._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar4,(MethodInfo *)0x0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
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
    cVar6 = (*pcRam_?)(pvVar5);
    if (cVar6 != '\0') {
      pGVar4 = (this->fields).content;
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
    }
    pcVar1 = pcRam_?;
    if (_UNK_? < fVar3) {
      (this->fields).currentState = 2;
      pcVar7 = pcRam_?;
      if ((pcVar1 == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar7 = pcVar1, pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar7;
      fVar3 = (float)(*pcVar1)();
      pGVar4 = (this->fields).content;
      (this->fields).stateStartTime = fVar3;
      if (pGVar4 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,1,(MethodInfo *)0x0);
      (*(this->klass->vtable).Update.methodPtr)(this,(this->klass->vtable).Update.method);
    }
    break;
  case 2:
    XPBoostNotification_UpdateBoostTextEffect(this,fVar3 - _UNK_?,(MethodInfo *)0x0);
    fVar8 = _UNK_?;
    XPBoostNotification_FadeOut(this,_UNK_? - fVar3,(MethodInfo *)0x0);
    XPBoostNotification_CloseNotification_1(this,fVar8 - fVar3,(MethodInfo *)0x0);
    if (fVar3 <= _UNK_?) {
      return;
    }
code_?:
    XPBoostNotification_StartNextState(this,(MethodInfo *)0x0);
    return;
  case 3:
    if (0 < (this->fields).currentMemberBeingHighlighted) {
      XPBoostNotification_UpdateBoostTextEffect(this,fVar3,(MethodInfo *)0x0);
      XPBoostNotification_SlideOutName(this,fVar3,(MethodInfo *)0x0);
      XPBoostNotification_SlideInName(this,fVar3,(MethodInfo *)0x0);
    }
    if (TypeRef__System__Activator__T._0_4_ < fVar3) goto code_?;
    break;
  case 4:
    XPBoostNotification_UpdateBoostTextEffect(this,fVar3,(MethodInfo *)0x0);
    XPBoostNotification_FadeOut(this,fVar3,(MethodInfo *)0x0);
    XPBoostNotification_CloseNotification_1(this,fVar3,(MethodInfo *)0x0);
    if (_UNK_? < fVar3) {
      XPBoostNotification_CloseNotification(this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


/* Void UpdateBoostAmount() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_UpdateBoostAmount
               (XPBoostNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral____XP);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((pMVar3 != (MVLocalPlayer *)0x0) &&
       (this_01 = (pMVar3->fields)._._SubscriptionRules_k__BackingField,
       this_01 != (SubscriptionRulesWrapper *)0x0)) {
      this_02 = (XpBooster *)
                MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_GetRule
                          (this_01,SubscriptionBenefit__Enum_XPBoost,
                           MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                          );
      if (this_02 != (XpBooster *)0x0) {
        value = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::XpBooster::
                XpBooster_GetTotalXPBoost
                          (this_02,(this->fields).currentMemberBeingHighlighted + 1,
                           (MethodInfo *)0x0);
        pTVar4 = (this->fields).boostAmountText;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Number);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
             field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        aRStack_5[0]._pointer._value = (void *)0x0;
        aRStack_5[0]._length = 0;
        aRStack_5[0]._12_4_ = 0;
        pSVar6 = mscorlib.dll::System::Number::Number_FormatInt32
                           (value,aRStack_5,(IFormatProvider *)0x0,(MethodInfo *)0x0);
        pSVar6 = mscorlib.dll::System::String::String_Concat_5
                           (::StringLiteral__,pSVar6,StringLiteral____XP,(MethodInfo *)0x0);
        if (pTVar4 != (Text *)0x0) {
          UNRECOVERED_JUMPTABLE = (pTVar4->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)
                    (pTVar4,pSVar6,(pTVar4->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateBoostTextEffect(Single) */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification_UpdateBoostTextEffect
               (XPBoostNotification *this,float stateProgress,MethodInfo *method)

{
  obj = (this->fields).updateBoostTextEffectCurve;
  if (obj != (AnimationCurve *)0x0) {
    pvVar1 = (obj->fields).m_Ptr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    uVar4 = (*pcRam_?)(pvVar1,stateProgress);
    pTVar5 = (this->fields).boostAmountText;
    if ((pTVar5 != (Text *)0x0) &&
       (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar5,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar1 = (pTVar6->fields)._._.m_CachedPtr;
      if (pvVar1 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar1);
      pTVar5 = (this->fields).boostAmountText;
      if ((pTVar5 != (Text *)0x0) &&
         (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar5,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
        uStack_7 = CONCAT44(uVar4,uVar4);
        uStack_8 = 0;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar1 = (pTVar6->fields)._._.m_CachedPtr;
        if (pvVar1 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar1,&uStack_7);
        return;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* XPBoostNotification() */

void Assembly-CSharp.dll::XPBoostNotification::XPBoostNotification__ctor
               (XPBoostNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVPlayer>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_MVPlayer_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVPlayer>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVPlayer>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).memberList = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).memberList >> 0xc);
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
  (this->fields).currentMemberBeingHighlighted = -1;
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

