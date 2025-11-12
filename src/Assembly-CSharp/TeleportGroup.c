
/* Void Initialize(MVTeleportGroup) */

void Assembly-CSharp.dll::TeleportGroup::TeleportGroup_Initialize
               (TeleportGroup *this,MVTeleportGroup *owner,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).worldObject = owner;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).worldObject >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pMVar6 = (this->fields).worldObject;
  if ((pMVar6 != (MVTeleportGroup *)0x0) &&
     (pMVar7 = (pMVar6->fields).teleporter1, pMVar7 != (MVTeleporter *)0x0)) {
    pUVar8 = (pMVar7->fields)._._.PositionChanged;
    pUVar9 = (UnityAction_2_System_Object_System_Object_ *)
             FUN_?(
                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar9,(Object *)this,
               MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_,
               (MethodInfo *)0x0);
    pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar8,(Delegate *)pUVar9,(MethodInfo *)0x0);
    pUVar11 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    if (pDVar10 == (Delegate *)0x0) {
      (pMVar7->fields)._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    }
    else {
      pUVar8 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                FUN_?(pDVar10,
                              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                             );
      if (pUVar8 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        FUN_?(pDVar10,pUVar11);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      (pMVar7->fields)._._.PositionChanged = pUVar8;
      pUVar11 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      lVar3 = FUN_?(pDVar10,
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
      if (lVar3 == 0) {
        FUN_?(pDVar10,pUVar11);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(pMVar7->fields)._._.PositionChanged >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pMVar6 = (this->fields).worldObject;
    if ((pMVar6 != (MVTeleportGroup *)0x0) &&
       (pMVar7 = (pMVar6->fields).teleporter2, pMVar7 != (MVTeleporter *)0x0)) {
      pUVar8 = (pMVar7->fields)._._.PositionChanged;
      pUVar9 = (UnityAction_2_System_Object_System_Object_ *)
               FUN_?(
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar9,(Object *)this,
                 MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pUVar8,(Delegate *)pUVar9,(MethodInfo *)0x0);
      pUVar11 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (pDVar10 == (Delegate *)0x0) {
        (pMVar7->fields)._._.PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      }
      else {
        pUVar8 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                  FUN_?(pDVar10,
                                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                               );
        if (pUVar8 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
          FUN_?(pDVar10,pUVar11);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        (pMVar7->fields)._._.PositionChanged = pUVar8;
        pUVar11 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        lVar3 = FUN_?(pDVar10,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
        if (lVar3 == 0) {
          FUN_?(pDVar10,pUVar11);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(pMVar7->fields)._._.PositionChanged >> 0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar1 = uVar4 == *puVar5;
          if (bVar1) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      pMVar6 = (this->fields).worldObject;
      if (pMVar6 != (MVTeleportGroup *)0x0) {
        pUVar8 = (pMVar6->fields)._._._.PositionChanged;
        pUVar9 = (UnityAction_2_System_Object_System_Object_ *)
                 FUN_?(
                              TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar9,(Object *)this,
                   MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_
                   ,(MethodInfo *)0x0);
        pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pUVar8,(Delegate *)pUVar9,(MethodInfo *)0x0);
        pUVar11 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        if (pDVar10 == (Delegate *)0x0) {
          (pMVar6->fields)._._._.PositionChanged =
               (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
        }
        else {
          pUVar8 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                    FUN_?(pDVar10,
                                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                 );
          if (pUVar8 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
            FUN_?(pDVar10,pUVar11);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (pMVar6->fields)._._._.PositionChanged = pUVar8;
          pUVar11 = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
          lVar3 = FUN_?(pDVar10,
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                                );
          if (lVar3 == 0) {
            FUN_?(pDVar10,pUVar11);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&(pMVar6->fields)._._._.PositionChanged >> 0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        pMVar6 = (this->fields).worldObject;
        pLVar13 = (this->fields).lineRenderer;
        if ((pMVar6 != (MVTeleportGroup *)0x0) &&
           (pMVar7 = (pMVar6->fields).teleporter1, pMVar7 != (MVTeleporter *)0x0)) {
          puVar14 = (undefined8 *)
                    (*(pMVar7->klass->vtable).get_WorldPosition_1.methodPtr)
                              (&uStack_15,pMVar7,(pMVar7->klass->vtable).get_WorldPosition_1.method)
          ;
          if (pLVar13 != (LineRenderer *)0x0) {
            uStack_16 = *puVar14;
            uStack_17 = *(undefined4 *)(puVar14 + 1);
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar18 = (pLVar13->fields)._._._.m_CachedPtr;
            if (pvVar18 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar13,(MethodInfo *)0x0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcVar12 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
              uVar19 = func_?(&UNK_?);
              FUN_?(uVar19,0);
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pcRam_? = pcVar12;
            (*pcRam_?)(pvVar18,0,&uStack_16);
            pMVar6 = (this->fields).worldObject;
            pLVar13 = (this->fields).lineRenderer;
            if ((pMVar6 != (MVTeleportGroup *)0x0) &&
               (pMVar7 = (pMVar6->fields).teleporter2, pMVar7 != (MVTeleporter *)0x0)) {
              puVar14 = (undefined8 *)
                        (*(pMVar7->klass->vtable).get_WorldPosition_1.methodPtr)
                                  (auStack_20,pMVar7,
                                   (pMVar7->klass->vtable).get_WorldPosition_1.method);
              if (pLVar13 == (LineRenderer *)0x0) {
                FUN_?();
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uStack_15 = *puVar14;
              uStack_21 = *(undefined4 *)(puVar14 + 1);
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar18 = (pLVar13->fields)._._._.m_CachedPtr;
              if (pvVar18 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar13,(MethodInfo *)0x0);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pcVar12 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pcRam_? = pcVar12;
              (*pcRam_?)(pvVar18,1,&uStack_15);
              return;
            }
          }
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TeleportGroup::TeleportGroup_OnDestroy
               (TeleportGroup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).worldObject == (MVTeleportGroup *)0x0) {
    return;
  }
  pMVar1 = (((this->fields).worldObject)->fields).teleporter1;
  if (pMVar1 != (MVTeleporter *)0x0) {
    pUVar2 = (pMVar1->fields)._._.PositionChanged;
    pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
             FUN_?(
                          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar3,(Object *)this,
               MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    pUVar5 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    if (pDVar4 == (Delegate *)0x0) {
      (pMVar1->fields)._._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    }
    else {
      pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
               FUN_?(pDVar4,
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
      if (pUVar2 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        FUN_?(pDVar4,pUVar5);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (pMVar1->fields)._._.PositionChanged = pUVar2;
      pUVar5 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      lVar7 = FUN_?(pDVar4,
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
      if (lVar7 == 0) {
        FUN_?(pDVar4,pUVar5);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&(pMVar1->fields)._._.PositionChanged >> 0xc);
      lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar10 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pMVar12 = (this->fields).worldObject;
    if ((pMVar12 != (MVTeleportGroup *)0x0) &&
       (pMVar1 = (pMVar12->fields).teleporter2, pMVar1 != (MVTeleporter *)0x0)) {
      pUVar2 = (pMVar1->fields)._._.PositionChanged;
      pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
               FUN_?(
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                            );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__TeleportGroup__PositionChanged_System__Object__PositionChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
      pUVar5 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      if (pDVar4 == (Delegate *)0x0) {
        (pMVar1->fields)._._.PositionChanged =
             (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      }
      else {
        pUVar2 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                 FUN_?(pDVar4,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
        if (pUVar2 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
          FUN_?(pDVar4,pUVar5);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (pMVar1->fields)._._.PositionChanged = pUVar2;
        pUVar5 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
        lVar7 = FUN_?(pDVar4,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                              );
        if (lVar7 == 0) {
          FUN_?(pDVar4,pUVar5);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (iRam_? == 0) {
        return;
      }
      uVar8 = (uint)((ulonglong)&(pMVar1->fields)._._.PositionChanged >> 0xc);
      lVar7 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar10 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void PositionChanged(Object, PositionChangedEventArgs) */

void Assembly-CSharp.dll::TeleportGroup::TeleportGroup_PositionChanged
               (TeleportGroup *this,Object *sender,PositionChangedEventArgs *args,MethodInfo *method
               )

{
  pMVar1 = (this->fields).worldObject;
  if ((MVTeleportGroup *)sender == pMVar1) {
    pLVar2 = (this->fields).lineRenderer;
    if ((pMVar1 != (MVTeleportGroup *)0x0) &&
       (pMVar3 = (pMVar1->fields).teleporter1, pMVar3 != (MVTeleporter *)0x0)) {
      puVar4 = (undefined8 *)
               (*(pMVar3->klass->vtable).get_WorldPosition_1.methodPtr)
                         (&uStack_5,pMVar3,(pMVar3->klass->vtable).get_WorldPosition_1.method);
      if (pLVar2 != (LineRenderer *)0x0) {
        uStack_6 = *puVar4;
        fStack_7 = *(float *)(puVar4 + 1);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar8 = (pLVar2->fields)._._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar2,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar8,0,&uStack_6);
        pMVar1 = (this->fields).worldObject;
        pLVar2 = (this->fields).lineRenderer;
        if ((pMVar1 != (MVTeleportGroup *)0x0) &&
           (pMVar3 = (pMVar1->fields).teleporter2, pMVar3 != (MVTeleporter *)0x0)) {
          puVar4 = (undefined8 *)
                   (*(pMVar3->klass->vtable).get_WorldPosition_1.methodPtr)
                             (auStack_11,pMVar3,(pMVar3->klass->vtable).get_WorldPosition_1.method);
          if (pLVar2 == (LineRenderer *)0x0) {
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uStack_5 = *puVar4;
          uStack_12 = *(undefined4 *)(puVar4 + 1);
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar8 = (pLVar2->fields)._._._.m_CachedPtr;
          if (pvVar8 != (void *)0x0) {
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcRam_? = pcVar9;
            (*pcRam_?)(pvVar8,1,&uStack_5);
            return;
          }
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar2,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else if (pMVar1 != (MVTeleportGroup *)0x0) {
    if ((MVTeleporter *)sender == (pMVar1->fields).teleporter1) {
      uVar10 = 0;
    }
    else {
      if ((MVTeleporter *)sender != (pMVar1->fields).teleporter2) {
        return;
      }
      uVar10 = 1;
    }
    if ((args != (PositionChangedEventArgs *)0x0) &&
       (pLVar2 = (this->fields).lineRenderer, pLVar2 != (LineRenderer *)0x0)) {
      uStack_6._0_4_ = (args->fields).NewPos.x;
      uStack_6._4_4_ = (args->fields).NewPos.y;
      fStack_7 = (args->fields).NewPos.z;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar8 = (pLVar2->fields)._._._.m_CachedPtr;
      if (pvVar8 != (void *)0x0) {
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar8,uVar10,&uStack_6);
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar2,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

