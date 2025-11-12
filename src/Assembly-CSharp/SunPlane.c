
/* Void OnPreRender() */

void Assembly-CSharp.dll::SunPlane::SunPlane_OnPreRender(SunPlane *this,MethodInfo *method)

{
  pTVar1 = (this->fields).sunPlane;
  pCVar2 = (this->fields).mainCamera;
  if ((pCVar2 != (Camera *)0x0) &&
     (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pCVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_4.x = 0.0;
    VStack_4.y = 0.0;
    VStack_4.z = 0.0;
    pvVar5 = (pTVar3->fields)._._.m_CachedPtr;
    if (pvVar5 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar5);
    this_00 = (this->fields).mainLight;
    if ((this_00 != (Light *)0x0) &&
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_00,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_9,pTVar3,(MethodInfo *)0x0);
      VStack_10.x = pVVar8->x;
      VStack_10.y = pVVar8->y;
      fVar11 = VStack_4.z - pVVar8->z * _UNK_?;
      if (pTVar1 != (Transform *)0x0) {
        VStack_10.y = VStack_4.y - VStack_10.y * _UNK_?;
        VStack_10.x = VStack_4.x - VStack_10.x * _UNK_?;
        VStack_10.z = fVar11;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar5);
        pCVar2 = (this->fields).mainCamera;
        pTVar1 = (this->fields).sunPlane;
        if ((pCVar2 != (Camera *)0x0) &&
           (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pCVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0))
        {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          VStack_4.x = 0.0;
          VStack_4.y = 0.0;
          VStack_4.z = 0.0;
          pvVar5 = (pTVar3->fields)._._.m_CachedPtr;
          if (pvVar5 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
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
          (*pcRam_?)(pvVar5,&VStack_4);
          if (pTVar1 != (Transform *)0x0) {
            VStack_9.x = VStack_4.x;
            VStack_9.y = VStack_4.y;
            VStack_9.z = VStack_4.z;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                      (pTVar1,&VStack_9,(MethodInfo *)0x0);
            pTVar1 = (this->fields).sunPlane;
            if (pTVar1 != (Transform *)0x0) {
              pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                                 (&VStack_10,pTVar1,(MethodInfo *)0x0);
              VStack_9.x = pVVar8->x;
              VStack_9.y = pVVar8->y;
              VStack_9.z = pVVar8->z;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
              if (pvVar5 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
              (*pcRam_?)(pvVar5,&VStack_9,_UNK_?);
              return;
            }
          }
          goto code_?;
        }
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::SunPlane::SunPlane_Start(SunPlane *this,MethodInfo *method)

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

