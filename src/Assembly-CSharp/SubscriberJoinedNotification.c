
/* Void ChangeState(SubscriberJoinedNotification+subscriberJoinedStateType) */

void Assembly-CSharp.dll::SubscriberJoinedNotification::SubscriberJoinedNotification_ChangeState
               (SubscriberJoinedNotification *this,
               SubscriberJoinedNotification_subscriberJoinedStateType__Enum newState,
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

void Assembly-CSharp.dll::SubscriberJoinedNotification::
     SubscriberJoinedNotification_CloseNotification
               (SubscriberJoinedNotification *this,MethodInfo *method)

{
  SubscriberJoinedNotification_ResetNotificationUI(this,(MethodInfo *)0x0);
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
      if ((this != (SubscriberJoinedNotification *)0x0) &&
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


/* Void CloseNotificationAnimation(Single) */

void Assembly-CSharp.dll::SubscriberJoinedNotification::
     SubscriberJoinedNotification_CloseNotificationAnimation
               (SubscriberJoinedNotification *this,float stateProgress,MethodInfo *method)

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

void Assembly-CSharp.dll::SubscriberJoinedNotification::SubscriberJoinedNotification_FadeOut
               (SubscriberJoinedNotification *this,float stateProgress,MethodInfo *method)

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

void Assembly-CSharp.dll::SubscriberJoinedNotification::
     SubscriberJoinedNotification_HandleClosingDownState
               (SubscriberJoinedNotification *this,float currentStateTime,MethodInfo *method)

{
  SubscriberJoinedNotification_UpdateBoostTextEffect(this,currentStateTime,(MethodInfo *)0x0);
  SubscriberJoinedNotification_FadeOut(this,currentStateTime,(MethodInfo *)0x0);
  SubscriberJoinedNotification_CloseNotificationAnimation(this,currentStateTime,(MethodInfo *)0x0);
  if (_UNK_? < currentStateTime) {
    SubscriberJoinedNotification_CloseNotification(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void HandleHighlightState(Single) */

void Assembly-CSharp.dll::SubscriberJoinedNotification::
     SubscriberJoinedNotification_HandleHighlightState
               (SubscriberJoinedNotification *this,float currentStateTime,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if (TypeRef__System__Activator__T._0_4_ < currentStateTime) {
    (this->fields).currentState = 4;
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
  }
  return;
}


/* Void HandleStartState(Single) */

void Assembly-CSharp.dll::SubscriberJoinedNotification::
     SubscriberJoinedNotification_HandleStartState
               (SubscriberJoinedNotification *this,float currentStateTime,MethodInfo *method)

{
  SubscriberJoinedNotification_UpdateBoostTextEffect
            (this,currentStateTime - _UNK_?,(MethodInfo *)0x0);
  fVar1 = _UNK_?;
  SubscriberJoinedNotification_FadeOut(this,_UNK_? - currentStateTime,(MethodInfo *)0x0);
  SubscriberJoinedNotification_CloseNotificationAnimation
            (this,fVar1 - currentStateTime,(MethodInfo *)0x0);
  pcVar2 = pcRam_?;
  if (_UNK_? < currentStateTime) {
    (this->fields).currentState = 3;
    pcVar3 = pcRam_?;
    if ((pcVar2 == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar3 = pcVar2, pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar3;
    fVar1 = (float)(*pcVar2)();
    (this->fields).stateStartTime = fVar1;
  }
  return;
}


/* Void HandleState() */

void Assembly-CSharp.dll::SubscriberJoinedNotification::SubscriberJoinedNotification_HandleState
               (SubscriberJoinedNotification *this,MethodInfo *method)

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
  pcVar1 = pcRam_?;
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
    SubscriberJoinedNotification_UpdateBoostTextEffect
              (this,fVar3 - _UNK_?,(MethodInfo *)0x0);
    fVar8 = _UNK_?;
    SubscriberJoinedNotification_FadeOut(this,_UNK_? - fVar3,(MethodInfo *)0x0);
    SubscriberJoinedNotification_CloseNotificationAnimation(this,fVar8 - fVar3,(MethodInfo *)0x0);
    pcVar1 = pcRam_?;
    if (_UNK_? < fVar3) {
      (this->fields).currentState = 3;
      pcVar7 = pcRam_?;
      if ((pcVar1 == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar7 = pcVar1, pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
code_?:
      pcRam_? = pcVar7;
      fVar3 = (float)(*pcVar1)();
      (this->fields).stateStartTime = fVar3;
      return;
    }
    break;
  case 3:
    if (TypeRef__System__Activator__T._0_4_ < fVar3) {
      (this->fields).currentState = 4;
      pcVar7 = pcRam_?;
      if ((pcVar1 == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar7 = pcVar1, pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto code_?;
    }
    break;
  case 4:
    SubscriberJoinedNotification_UpdateBoostTextEffect(this,fVar3,(MethodInfo *)0x0);
    SubscriberJoinedNotification_FadeOut(this,fVar3,(MethodInfo *)0x0);
    SubscriberJoinedNotification_CloseNotificationAnimation(this,fVar3,(MethodInfo *)0x0);
    if (_UNK_? < fVar3) {
      SubscriberJoinedNotification_CloseNotification(this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


/* Void HandleWaitBeforeStart(Single) */

void Assembly-CSharp.dll::SubscriberJoinedNotification::
     SubscriberJoinedNotification_HandleWaitBeforeStart
               (SubscriberJoinedNotification *this,float currentStateTime,MethodInfo *method)

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

void Assembly-CSharp.dll::SubscriberJoinedNotification::SubscriberJoinedNotification_Initialize
               (SubscriberJoinedNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOStackX_20 = (Object *)0x0;
  VStackX_10.x._0_1_ = 9;
  pOVar1 = (Object *)FUN_?(uRam_?,&VStackX_10);
  if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (data,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pOVar1 != (Object *)0x0)) {
    if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar1,lRam_?);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    key = *(int32_t *)&pOVar1[1].klass;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar3 != (MVGameControllerBase *)0x0) &&
        (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
       (pMVar5 = (pMVar4->fields).playerContainer, pMVar5 != (MVPlayerContainer *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (pMVar5->fields).players;
      if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
        bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__TryGetValue
                          ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,&pOStackX_20,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                          );
        if (bVar6 == 0) {
          SubscriberJoinedNotification_CloseNotification(this,(MethodInfo *)0x0);
          return;
        }
        (this->fields)._.timeSinceStart = 0.0;
        if (((pOStackX_20 != (Object *)0x0) && (pOStackX_20[7].klass != (Object__Class *)0x0)) &&
           (pTVar7 = (this->fields).userNameText, pTVar7 != (Text *)0x0)) {
          (*(pTVar7->klass->vtable).set_text.methodPtr)
                    (pTVar7,((pOStackX_20[7].klass)->_0).namespaze,
                     (pTVar7->klass->vtable).set_text.method);
          pRVar8 = (this->fields).backGround;
          if (pRVar8 != (RectTransform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar9 = (pRVar8->fields)._._._.m_CachedPtr;
            if (pvVar9 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar8,(MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
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
            (*pcRam_?)(pvVar9);
            pRVar8 = (this->fields).backGround;
            (this->fields).backgroundOriginalWidth = 0.0;
            if (pRVar8 != (RectTransform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar9 = (pRVar8->fields)._._._.m_CachedPtr;
              if (pvVar9 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar8,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
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
              (*pcRam_?)(pvVar9);
              pRVar8 = (this->fields).backGround;
              (this->fields).backgroundOriginalHeigt = 0.0;
              if (pRVar8 != (RectTransform *)0x0) {
                VStackX_10 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
                             RectTransform_get_sizeDelta(pRVar8,(MethodInfo *)0x0);
                pcVar2 = pcRam_?;
                (this->fields).backgroundOriginalSizeDelta.x = VStackX_10.x;
                (this->fields).backgroundOriginalSizeDelta.y = VStackX_10.y;
                (this->fields).currentState = 1;
                pcVar11 = pcRam_?;
                if ((pcVar2 == (code *)0x0) &&
                   (pcVar2 = (code *)FUN_?(&UNK_?), pcVar11 = pcVar2,
                   pcVar2 == (code *)0x0)) {
                  uVar10 = func_?(&UNK_?);
                  FUN_?(uVar10,0);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pcRam_? = pcVar11;
                fVar12 = (float)(*pcVar2)();
                (this->fields).stateStartTime = fVar12;
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::SubscriberJoinedNotification::SubscriberJoinedNotification_OnDisable
               (SubscriberJoinedNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pNVar1 = (this->fields)._.pool;
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
  if (pNVar1 != (NotificationObjectPool *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pNVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      SubscriberJoinedNotification_ResetNotificationUI(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void ResetNotificationUI() */

void Assembly-CSharp.dll::SubscriberJoinedNotification::
     SubscriberJoinedNotification_ResetNotificationUI
               (SubscriberJoinedNotification *this,MethodInfo *method)

{
  this_00 = (this->fields).backGround;
  if (this_00 != (RectTransform *)0x0) {
    value.y = (this->fields).backgroundOriginalSizeDelta.y;
    value.x = (this->fields).backgroundOriginalSizeDelta.x;
    UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_set_sizeDelta
              (this_00,value,(MethodInfo *)0x0);
    this_01 = (this->fields).backgroundCanvasGroup;
    (this->fields).currentState = 0;
    if (this_01 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_01,0.0,(MethodInfo *)0x0);
      pGVar1 = (this->fields).content;
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
          pGVar1 = (this->fields).content;
          if (pGVar1 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,0,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::SubscriberJoinedNotification::SubscriberJoinedNotification_Update
               (SubscriberJoinedNotification *this,MethodInfo *method)

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
  pcVar1 = pcRam_?;
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
    SubscriberJoinedNotification_UpdateBoostTextEffect
              (this,fVar3 - _UNK_?,(MethodInfo *)0x0);
    fVar8 = _UNK_?;
    SubscriberJoinedNotification_FadeOut(this,_UNK_? - fVar3,(MethodInfo *)0x0);
    SubscriberJoinedNotification_CloseNotificationAnimation(this,fVar8 - fVar3,(MethodInfo *)0x0);
    pcVar1 = pcRam_?;
    if (_UNK_? < fVar3) {
      (this->fields).currentState = 3;
      pcVar7 = pcRam_?;
      if ((pcVar1 == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar7 = pcVar1, pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
code_?:
      pcRam_? = pcVar7;
      fVar3 = (float)(*pcVar1)();
      (this->fields).stateStartTime = fVar3;
      return;
    }
    break;
  case 3:
    if (TypeRef__System__Activator__T._0_4_ < fVar3) {
      (this->fields).currentState = 4;
      pcVar7 = pcRam_?;
      if ((pcVar1 == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar7 = pcVar1, pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto code_?;
    }
    break;
  case 4:
    SubscriberJoinedNotification_UpdateBoostTextEffect(this,fVar3,(MethodInfo *)0x0);
    SubscriberJoinedNotification_FadeOut(this,fVar3,(MethodInfo *)0x0);
    SubscriberJoinedNotification_CloseNotificationAnimation(this,fVar3,(MethodInfo *)0x0);
    if (_UNK_? < fVar3) {
      SubscriberJoinedNotification_CloseNotification(this,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


/* Void UpdateBoostTextEffect(Single) */

void Assembly-CSharp.dll::SubscriberJoinedNotification::
     SubscriberJoinedNotification_UpdateBoostTextEffect
               (SubscriberJoinedNotification *this,float stateProgress,MethodInfo *method)

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

