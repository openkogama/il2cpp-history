
/* Void Add(MVSkybox) */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_Add
               (SkyboxManager *this,MVSkybox *skybox,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVSkybox>__Add_MVSkybox_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this != (SkyboxManager *)0x0) {
    pvVar1 = (this->fields)._._._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
    cVar4 = (*pcRam_?)(pvVar1);
    if (cVar4 == '\0') {
      if (skybox == (MVSkybox *)0x0) goto code_?;
      (skybox->fields)._._.interactionFlags = 1;
    }
    pMVar5 = MethodInfo__System__Collections__Generic__List<MVSkybox>__Add_MVSkybox_;
    pLVar6 = (this->fields).mvSkyboxes;
    if (pLVar6 != (List_1_MVSkybox_ *)0x0) {
      piVar7 = &(pLVar6->fields)._version;
      *piVar7 = *piVar7 + 1;
      pMVar8 = (pLVar6->fields)._items;
      if (pMVar8 != (MVSkybox__Array *)0x0) {
        uVar9 = (pLVar6->fields)._size;
        if (uVar9 < (uint)pMVar8->max_length) {
          (pLVar6->fields)._size = uVar9 + 1;
        }
        else {
          uVar9 = (pLVar6->fields)._size;
          FUN_?(pLVar6,uVar9 + 1,
                        (pMVar5->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                        rgctxDataDummy,pMVar8,unaff_RDI);
          pMVar8 = (pLVar6->fields)._items;
          (pLVar6->fields)._size = uVar9 + 1;
          if (pMVar8 == (MVSkybox__Array *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if ((uint)pMVar8->max_length <= uVar9) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar10 = iRam_? != 0;
        pMVar8->vector[(int)uVar9] = skybox;
        if (bVar10) {
          uVar9 = (uint)((ulonglong)(pMVar8->vector + (int)uVar9) >> 0xc);
          puVar11 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar12 = *puVar11;
            LOCK();
            uVar13 = *puVar11;
            if (uVar12 == uVar13) {
              *puVar11 = uVar12 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (uVar12 != uVar13);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_Awake(SkyboxManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase__OnPostGameInitDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SkyboxManager___Awake_b__24_0__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            FUN_?(TypeInfo__MVGameControllerBase__OnPostGameInitDelegate);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__SkyboxManager___Awake_b__24_0__,(MethodInfo *)0x0);
  pMVar1 = (MVGameControllerBase_OnPostGameInitDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pMVar1 == (MVGameControllerBase_OnPostGameInitDelegate *)0x0) {
    TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit =
         (MVGameControllerBase_OnPostGameInitDelegate *)0x0;
  }
  else {
    pMVar2 = (MVGameControllerBase_OnPostGameInitDelegate *)0x0;
    if (pMVar1->klass == TypeInfo__MVGameControllerBase__OnPostGameInitDelegate) {
      pMVar2 = pMVar1;
    }
    if (pMVar2 == (MVGameControllerBase_OnPostGameInitDelegate *)0x0) {
      FUN_?(pMVar1,TypeInfo__MVGameControllerBase__OnPostGameInitDelegate);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit = pMVar2;
    pMVar2 = (MVGameControllerBase_OnPostGameInitDelegate *)0x0;
    if (pMVar1->klass == TypeInfo__MVGameControllerBase__OnPostGameInitDelegate) {
      pMVar2 = pMVar1;
    }
    if (pMVar2 == (MVGameControllerBase_OnPostGameInitDelegate *)0x0) {
      FUN_?(pMVar1,TypeInfo__MVGameControllerBase__OnPostGameInitDelegate);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit >> 0xc)
    ;
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void CalcAndSetSkyboxSettings() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_CalcAndSetSkyboxSettings
               (SkyboxManager *this,MethodInfo *method)

{
  SkyboxManager_ComputeSkyboxSettings
            (this,&(this->fields).targetColor,&(this->fields).targetSunAngle,
             &(this->fields).targetFogDensity,(MethodInfo *)0x0);
  CStack_1.r = (this->fields).targetColor.r;
  CStack_1.g = (this->fields).targetColor.g;
  CStack_1.b = (this->fields).targetColor.b;
  CStack_1.a = (this->fields).targetColor.a;
  SkyboxManager_SetColor
            (this,&CStack_1,(this->fields).targetSunAngle,(this->fields).targetFogDensity,
             (MethodInfo *)0x0);
  return;
}


/* Void ComputeSkyboxSettings(Color ByRef, Single ByRef, Single ByRef) */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_ComputeSkyboxSettings
               (SkyboxManager *this,Color *color,float *sunAngle,float *fogDensity,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  int_MethodInfo__System__Linq__Enumerable__Count<MVSkybox>_System__Collections__Generic__IEnumerable<MVSkybox>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerable<float>_MethodInfo__System__Linq__Enumerable__Select<MVSkybox,_float>_System__Collections__Generic__IEnumerable<MVSkybox>__System__Func<MVSkybox,_float>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerable<MVSkybox>_MethodInfo__System__Linq__Enumerable__Where<MVSkybox>_System__Collections__Generic__IEnumerable<MVSkybox>__System__Func<MVSkybox,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<MVSkybox,_float>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<MVSkybox,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<MVSkybox>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<MVSkybox>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SkyboxManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SkyboxManager____c___ComputeSkyboxSettings_b__30_0_MVSkybox_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SkyboxManager____c___ComputeSkyboxSettings_b__30_1_MVSkybox_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SkyboxManager____c___ComputeSkyboxSettings_b__30_2_MVSkybox_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SkyboxManager____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  source = (this->fields).mvSkyboxes;
  if (*(int *)&(TypeInfo__SkyboxManager____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = TypeInfo__SkyboxManager____c->static_fields->__9__30_0;
  if (this_00 == (Func_2_MVSkybox_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__SkyboxManager____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = TypeInfo__SkyboxManager____c->static_fields->__9;
    this_00 = (Func_2_MVSkybox_Boolean_ *)FUN_?(TypeInfo__System__Func<MVSkybox,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_00,(Object *)pSVar3,
               MethodInfo__SkyboxManager____c___ComputeSkyboxSettings_b__30_0_MVSkybox_,
               (MethodInfo *)0x0);
    TypeInfo__SkyboxManager____c->static_fields->__9__30_0 = this_00;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&TypeInfo__SkyboxManager____c->static_fields->__9__30_0 >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  pIVar9 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_1
                      ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Boolean_ *)this_00,
                       System__Collections__Generic__IEnumerable<MVSkybox>_MethodInfo__System__Linq__Enumerable__Where<MVSkybox>_System__Collections__Generic__IEnumerable<MVSkybox>__System__Func<MVSkybox,_bool>_
                      );
  pIStack_10 = pIVar9;
  iVar11 = System.Core.dll::System::Linq::Enumerable::Enumerable_Count_2
                    ((IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pIVar9,
                     int_MethodInfo__System__Linq__Enumerable__Count<MVSkybox>_System__Collections__Generic__IEnumerable<MVSkybox>_
                    );
  if (iVar11 == 0) {
    if (*(int *)&(TypeInfo__SkyboxManager->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__SkyboxManager);
    }
    pSVar12 = TypeInfo__SkyboxManager->static_fields;
    fVar13 = (pSVar12->defaultColor).g;
    fVar14 = (pSVar12->defaultColor).b;
    fVar15 = (pSVar12->defaultColor).a;
    color->r = (pSVar12->defaultColor).r;
    color->g = fVar13;
    color->b = fVar14;
    color->a = fVar15;
    *fogDensity = 0.007;
    *sunAngle = 80.0;
    return;
  }
  if (*(int *)&(TypeInfo__SkyboxManager____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  pFVar16 = TypeInfo__SkyboxManager____c->static_fields->__9__30_1;
  if (pFVar16 == (Func_2_MVSkybox_Single_ *)0x0) {
    if (*(int *)&(TypeInfo__SkyboxManager____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = TypeInfo__SkyboxManager____c->static_fields->__9;
    pFVar16 = (Func_2_MVSkybox_Single_ *)FUN_?(TypeInfo__System__Func<MVSkybox,_float>);
    mscorlib.dll::System::Func`2[Object,Single]::Func_2_Object_Single___ctor
              ((Func_2_Object_Single_ *)pFVar16,(Object *)pSVar3,
               MethodInfo__SkyboxManager____c___ComputeSkyboxSettings_b__30_1_MVSkybox_,
               (MethodInfo *)0x0);
    TypeInfo__SkyboxManager____c->static_fields->__9__30_1 = pFVar16;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&TypeInfo__SkyboxManager____c->static_fields->__9__30_1 >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_5
                        ((IEnumerable_1_UnityEngine_UIElements_StyleSelectorPart_ *)pIVar9,
                         (Func_2_UnityEngine_UIElements_StyleSelectorPart_Object_ *)pFVar16,
                         System__Collections__Generic__IEnumerable<float>_MethodInfo__System__Linq__Enumerable__Select<MVSkybox,_float>_System__Collections__Generic__IEnumerable<MVSkybox>__System__Func<MVSkybox,_float>_
                        );
  fVar13 = System.Core.dll::System::Linq::Enumerable::Enumerable_Average
                     ((IEnumerable_1_System_Single_ *)source_00,(MethodInfo *)0x0);
  *sunAngle = fVar13;
  uStack_1 = _UNK_?;
  uStack_2 = _UNK_?;
  if (pIVar9 == (IEnumerable_1_System_Object_ *)0x0) {
    FUN_?();
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  plStack_18 = (longlong *)
               FUN_?(0,TypeInfo__System__Collections__Generic__IEnumerable<MVSkybox>,pIVar9
                            );
  uStack_19 = 0;
  pplStack_20 = &plStack_18;
  fVar13 = (float)uStack_2;
  fVar14 = uStack_1._4_4_;
  fVar15 = (float)uStack_1;
  do {
    if (plStack_18 == (longlong *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    cVar21 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    plVar22 = plStack_18;
    if (cVar21 == '\0') {
      if (plStack_18 != (longlong *)0x0) {
        FUN_?(0,TypeInfo__System__IDisposable,plStack_18);
      }
      uStack_2 = CONCAT44(0x3f800000,(float)uStack_2);
      color->r = (float)uStack_1;
      color->g = uStack_1._4_4_;
      color->b = (float)uStack_2;
      color->a = 1.0;
      if (*(int *)&(TypeInfo__SkyboxManager____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      pFVar16 = TypeInfo__SkyboxManager____c->static_fields->__9__30_2;
      if (pFVar16 == (Func_2_MVSkybox_Single_ *)0x0) {
        if (*(int *)&(TypeInfo__SkyboxManager____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar3 = TypeInfo__SkyboxManager____c->static_fields->__9;
        pFVar16 = (Func_2_MVSkybox_Single_ *)FUN_?(TypeInfo__System__Func<MVSkybox,_float>);
        mscorlib.dll::System::Func`2[Object,Single]::Func_2_Object_Single___ctor
                  ((Func_2_Object_Single_ *)pFVar16,(Object *)pSVar3,
                   MethodInfo__SkyboxManager____c___ComputeSkyboxSettings_b__30_2_MVSkybox_,
                   (MethodInfo *)0x0);
        TypeInfo__SkyboxManager____c->static_fields->__9__30_2 = pFVar16;
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)&TypeInfo__SkyboxManager____c->static_fields->__9__30_2 >> 0xc)
          ;
          uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          do {
            uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
            puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
            LOCK();
            bVar8 = uVar6 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
      }
      pIVar9 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_5
                          ((IEnumerable_1_UnityEngine_UIElements_StyleSelectorPart_ *)pIVar9,
                           (Func_2_UnityEngine_UIElements_StyleSelectorPart_Object_ *)pFVar16,
                           System__Collections__Generic__IEnumerable<float>_MethodInfo__System__Linq__Enumerable__Select<MVSkybox,_float>_System__Collections__Generic__IEnumerable<MVSkybox>__System__Func<MVSkybox,_float>_
                          );
      fVar13 = System.Core.dll::System::Linq::Enumerable::Enumerable_Average
                         ((IEnumerable_1_System_Single_ *)pIVar9,(MethodInfo *)0x0);
      *fogDensity = fVar13;
      return;
    }
    if (plStack_18 == (longlong *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    lVar23 = *plStack_18;
    uVar24 = 0;
    if (*(ushort *)(lVar23 + 0x12e) != 0) {
      do {
        if (*(IEnumerator_1_MVSkybox___Class **)
             (*(longlong *)(lVar23 + 0xb0) + (ulonglong)uVar24 * 0x10) ==
            TypeInfo__System__Collections__Generic__IEnumerator<MVSkybox>) {
          puVar25 = (undefined8 *)
                    ((longlong)*(int *)(*(longlong *)(lVar23 + 0xb0) + 8 + (ulonglong)uVar24 * 0x10)
                     * 0x10 + 0x138 + lVar23);
          goto code_?;
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < *(ushort *)(lVar23 + 0x12e));
    }
    puVar25 = (undefined8 *)
              FUN_?(plStack_18,TypeInfo__System__Collections__Generic__IEnumerator<MVSkybox>
                           );
code_?:
    this_01 = (MVSkybox *)(*(code *)*puVar25)(plVar22,puVar25[1]);
    if (this_01 == (MVSkybox *)0x0) {
      FUN_?();
      goto code_?;
    }
    pCVar26 = MVSkybox::MVSkybox_get_SkyboxColor(aCStack_27,this_01,(MethodInfo *)0x0);
    fVar28 = (float)iVar11;
    fVar15 = pCVar26->r / fVar28 + fVar15;
    fVar14 = pCVar26->g / fVar28 + fVar14;
    uStack_1 = CONCAT44(fVar14,fVar15);
    fVar13 = pCVar26->b / fVar28 + fVar13;
    uStack_2 = CONCAT44(uStack_2._4_4_,fVar13);
  } while( true );
}


/* Void Disable() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_Disable
               (SkyboxManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVSkybox>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).sunLight;
  if (this_00 != (Light *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    pLVar1 = (this->fields).mvSkyboxes;
    if (pLVar1 != (List_1_MVSkybox_ *)0x0) {
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&uStack_3 >> 0xc);
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
      pLStack_7 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
      uStack_8 = 0;
      LStack_9._8_8_ = pLStack_7;
      LStack_9._current = (Object *)0x0;
      uStack_3 = 0;
      pLStack_7 = &LStack_9;
      LStack_9._list = (List_1_System_Object_ *)pLVar1;
      while (bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_9,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__MoveNext__
                               ), bVar10 != 0) {
        if (LStack_9._current == (Object *)0x0) goto code_?;
        LStack_9._current[0x11].monitor = (MonitorData *)0x1;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this != (SkyboxManager *)0x0) {
        pvVar11 = (this->fields)._._._._.m_CachedPtr;
        if (pvVar11 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pcVar12 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
          uVar13 = func_?(&UNK_?);
          FUN_?(uVar13,0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pcRam_? = pcVar12;
        (*pcRam_?)(pvVar11,0);
        return;
      }
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* IEnumerator DoAnimate() */

IEnumerator *
Assembly-CSharp.dll::SkyboxManager::SkyboxManager_DoAnimate(SkyboxManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SkyboxManager___DoAnimate_d__23);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__SkyboxManager___DoAnimate_d__23);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_Initialize
               (SkyboxManager *this,MethodInfo *method)

{
  SkyboxManager_ComputeSkyboxSettings
            (this,&(this->fields).targetColor,&(this->fields).targetSunAngle,
             &(this->fields).targetFogDensity,(MethodInfo *)0x0);
  CStack_1.r = (this->fields).targetColor.r;
  CStack_1.g = (this->fields).targetColor.g;
  CStack_1.b = (this->fields).targetColor.b;
  CStack_1.a = (this->fields).targetColor.a;
  SkyboxManager_SetColor
            (this,&CStack_1,(this->fields).targetSunAngle,(this->fields).targetFogDensity,
             (MethodInfo *)0x0);
  (this->fields).initialized = 1;
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_OnEnable
               (SkyboxManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVSkybox>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).sunLight;
  if (this_00 != (Light *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    pLVar1 = (this->fields).mvSkyboxes;
    if (pLVar1 != (List_1_MVSkybox_ *)0x0) {
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)auStack_3 >> 0xc);
        uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar5 == *puVar6;
          if (bVar7) {
            *puVar6 = uVar5 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      auStack_3._8_8_ = (ulonglong)(uint)(pLVar1->fields)._version << 0x20;
      uStack_8 = 0;
      LStack_9._index = auStack_3._8_4_;
      LStack_9._version = auStack_3._12_4_;
      LStack_9._current = (Object *)0x0;
      auStack_3._0_4_ = 0.0;
      auStack_3._4_4_ = 0.0;
      auStack_3._8_8_ = &LStack_9;
      LStack_9._list = (List_1_System_Object_ *)pLVar1;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_9,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__MoveNext__
                          );
        if (bVar10 == 0) {
          if ((this->fields).pendingLateInitialization != 0) {
            SkyboxManager_ComputeSkyboxSettings
                      (this,&(this->fields).targetColor,&(this->fields).targetSunAngle,
                       &(this->fields).targetFogDensity,(MethodInfo *)0x0);
            auStack_3._0_4_ = (this->fields).targetColor.r;
            auStack_3._4_4_ = (this->fields).targetColor.g;
            auStack_3._8_8_ = *(undefined8 *)&(this->fields).targetColor.b;
            SkyboxManager_SetColor
                      (this,(Color *)auStack_3,(this->fields).targetSunAngle,
                       (this->fields).targetFogDensity,(MethodInfo *)0x0);
            (this->fields).initialized = 1;
          }
          if ((this->fields).initialized != 0) {
            SkyboxManager_ComputeSkyboxSettings
                      (this,&(this->fields).targetColor,&(this->fields).targetSunAngle,
                       &(this->fields).targetFogDensity,(MethodInfo *)0x0);
            auStack_3._0_4_ = (this->fields).targetColor.r;
            auStack_3._4_4_ = (this->fields).targetColor.g;
            auStack_3._8_4_ = (this->fields).targetColor.b;
            auStack_3._12_4_ = (this->fields).targetColor.a;
            SkyboxManager_SetColor
                      (this,(Color *)auStack_3,(this->fields).targetSunAngle,
                       (this->fields).targetFogDensity,(MethodInfo *)0x0);
          }
          return;
        }
        if (LStack_9._current == (Object *)0x0) break;
        LStack_9._current[0x11].monitor = LStack_9._current[0x17].monitor;
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void RefreshColor() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_RefreshColor
               (SkyboxManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_DoAnimate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).initialized == 0) {
    return;
  }
  SkyboxManager_ComputeSkyboxSettings
            (this,&(this->fields).targetColor,&(this->fields).targetSunAngle,
             &(this->fields).targetFogDensity,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine_2
            ((MonoBehaviour *)this,StringLiteral_DoAnimate,(MethodInfo *)0x0);
  pSVar1 = StringLiteral_DoAnimate;
  if ((StringLiteral_DoAnimate == (String *)0x0) ||
     ((StringLiteral_DoAnimate->fields)._stringLength == 0)) {
    puStackY_30 = &UNK_?;
    uVar2 = func_?(&TypeInfo__System__NullReferenceException);
    puStackY_30 = &UNK_?;
    this_00 = (NullReferenceException *)func_?(uVar2);
    puStackY_30 = &UNK_?;
    pSVar1 = (String *)func_?(&StringLiteral_methodName_is_null_or_empty);
    puStackY_30 = &UNK_?;
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar1,(MethodInfo *)0x0);
    puStackY_30 = &UNK_?;
    uVar2 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__String__System__Object_
                               );
    puStackY_30 = &UNK_?;
    FUN_?(this_00,uVar2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puStackY_30 = &UNK_?;
  puStackX_8 = unaff_RBX;
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    puStackY_30 = &UNK_?;
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    puStackY_30 = &UNK_?;
    this_01 = (InvalidEnumArgumentException *)func_?(uVar2);
    puStackY_30 = &UNK_?;
    pSVar1 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    puStackY_30 = &UNK_?;
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar1,(MethodInfo *)0x0);
    puStackY_30 = &UNK_?;
    uVar2 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__String__System__Object_
                               );
    puStackY_30 = &UNK_?;
    FUN_?(this_01,uVar2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puStackX_10 = puStackX_8;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                  ,pSVar1,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  puStackX_8 = (uint16_t *)0x0;
  puStackY_38 = (uint16_t *)0x0;
  puStackY_30 = (undefined *)0x0;
  uStackY_28 = 0;
  ppuStackY_20 = &puStackX_8;
  if (this != (SkyboxManager *)0x0) {
    pvVar5 = (this->fields)._._._._.m_CachedPtr;
    if (pvVar5 != (void *)0x0) {
      if (pSVar1 != (String *)0x0) {
        if ((pSVar1->fields)._stringLength == 0) {
          puStackY_38 = (uint16_t *)0x1;
          puStackY_30 = (undefined *)0x0;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          iVar6 = (pSVar1->fields)._stringLength;
          puStackX_8 = &(pSVar1->fields)._firstChar;
          if (iVar6 == 0) {
            puStackX_8 = (uint16_t *)0x0;
          }
          puStackY_30 = (undefined *)CONCAT44(puStackY_30._4_4_,iVar6);
          puStackY_38 = puStackX_8;
        }
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? != (code *)0x0) ||
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 != (code *)0x0)) {
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar5,&puStackY_38,0);
        return;
      }
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Remove(MVSkybox) */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_Remove
               (SkyboxManager *this,MVSkybox *skybox,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVSkybox>__Remove_MVSkybox_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<MVSkybox>__Remove_MVSkybox_;
  this_00 = (this->fields).mvSkyboxes;
  if (this_00 != (List_1_MVSkybox_ *)0x0) {
    index = mscorlib.dll::System::Array::Array_IndexOf_69
                      ((Object__Array *)(this_00->fields)._items,(Object *)skybox,0,
                       (this_00->fields)._size,
                       (MethodInfo__System__Collections__Generic__List<MVSkybox>__Remove_MVSkybox_->
                        klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
    if (index < 0) {
      return;
    }
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__RemoveAt
              ((List_1_System_Object_ *)this_00,index,pMVar1->klass->rgctx_data[0x2b].method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ResetAmbientLight() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_ResetAmbientLight(MethodInfo *method)

{
  uStack_1 = _UNK_?;
  uStack_2 = _UNK_?;
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
  (*pcRam_?)(&uStack_1);
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
  (*pcRam_?)();
  return;
}


/* Void SetColor(Color, Single, Single) */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_SetColor
               (SkyboxManager *this,Color *color,float sunAngle,float fogDensity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SkyboxManager);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__Color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = color->r;
  fVar2 = color->g;
  fVar3 = color->b;
  fVar4 = color->a;
  (this->fields).currentSunAngle = sunAngle;
  (this->fields).currentColor.r = fVar1;
  (this->fields).currentColor.g = fVar2;
  (this->fields).currentColor.b = fVar3;
  (this->fields).currentColor.a = fVar4;
  (this->fields).currentFogDensity = fogDensity;
  fVar1 = _UNK_?;
  fVar3 = 0.0;
  fVar2 = color->g * _UNK_? + color->r * _UNK_? + color->b * _UNK_?;
  if (fVar2 < 0.0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = _UNK_?;
    if (fVar2 <= _UNK_?) {
      fVar4 = fVar2;
    }
  }
  fVar5 = fVar4 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                    ._0_4_ * fVar4 * fVar4 + fVar4 * _UNK_? * fVar4;
  fVar4 = color->r;
  fVar6 = color->g;
  fVar7 = color->b;
  fVar8 = color->a;
  fVar5 = ((_UNK_? - fVar5) * 0.0 + fVar5 * _UNK_?) / _UNK_?;
  if (*(int *)&(TypeInfo__SkyboxManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SkyboxManager);
  }
  pSVar9 = TypeInfo__SkyboxManager->static_fields;
  fVar10 = (pSVar9->brightAmbient).r;
  CStack_11.b = (pSVar9->brightAmbient).g;
  CStack_12.g = (pSVar9->brightAmbient).b;
  fVar13 = (pSVar9->brightAmbient).a;
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  else if (fVar1 < fVar5) {
    fVar5 = fVar1;
  }
  CStack_11.g = CStack_11.b;
  CStack_11.r = (CStack_11.b - fVar6) * fVar5 + fVar6;
  CStack_12.r = (CStack_12.g - fVar7) * fVar5 + fVar7;
  CStack_12.a = CStack_12.g;
  CStack_12.b = CStack_12.g;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  fVar2 = fVar2 * MethodInfo__System__Runtime__CompilerServices__CallSite_1_T_____c<System::Runtime::CompilerServices::CallSite_1_T_::T>___CreateCustomNoMatchDelegate_b__21_0_System__Reflection__ParameterInfo_
                    ._0_4_ * fVar2 * fVar2 + fVar2 * _UNK_? * fVar2;
  fVar1 = (fVar1 - fVar2) * _UNK_?;
  pcVar14 = pcRam_?;
  CStack_11.a = CStack_11.b;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(1);
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(3);
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(_UNK_?);
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(_UNK_?);
  uStack_16._0_4_ = color->r;
  uStack_16._4_4_ = color->g;
  uStack_17._0_4_ = color->b;
  uStack_17._4_4_ = color->a;
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(&uStack_16);
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(fogDensity);
  fVar2 = (fVar1 + fVar2 * 0.0) * _UNK_? + _UNK_?;
  fVar1 = fVar2 * ((fVar10 - fVar4) * fVar5 + fVar4);
  CStack_11.b = fVar2 * CStack_12.r;
  CStack_11.a = fVar2 * ((fVar13 - fVar8) * fVar5 + fVar8);
  CStack_12.g = fVar2 * CStack_11.r;
  CStack_12.r = fVar1;
  CStack_12.a = CStack_11.a;
  CStack_12.b = CStack_11.b;
  CStack_11.g = fVar2 * CStack_11.r;
  CStack_11.r = fVar1;
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(&CStack_12);
  pLVar18 = (this->fields).sunLight;
  if (pLVar18 == (Light *)0x0) {
    FUN_?();
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  obj_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)pLVar18,(MethodInfo *)0x0);
  CStack_11.b = 0.0;
  CStack_11.g = _UNK_?;
  CStack_11.r = sunAngle * _UNK_?;
  uStack_16 = 0;
  uStack_17 = 0;
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(&CStack_11);
  if (obj_01 == (Transform *)0x0) {
    FUN_?();
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  fStack_19 = (float)uStack_16;
  fStack_20 = uStack_16._4_4_;
  fStack_21 = (float)uStack_17;
  fStack_22 = uStack_17._4_4_;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar23 = (obj_01->fields)._._.m_CachedPtr;
  if (pvVar23 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj_01,(MethodInfo *)0x0);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pcVar14 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
    uVar15 = func_?(&UNK_?);
    FUN_?(uVar15,0);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pcRam_? = pcVar14;
  (*pcRam_?)(pvVar23);
  pLVar18 = (this->fields).sunLight;
  fVar1 = (float)((uint)((this->fields).currentSunAngle - _UNK_?) & _UNK_?);
  if (fVar1 <= _UNK_?) {
    obj = (this->fields).lightDuskDawnFalloff;
    if (obj == (AnimationCurve *)0x0) goto code_?;
    pvVar23 = (obj->fields).m_Ptr;
    if (pvVar23 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    fVar1 = fVar1 / _UNK_?;
    pcVar14 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
      uVar15 = func_?(&UNK_?);
      FUN_?(uVar15,0);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pcRam_? = pcVar14;
    fVar3 = (float)(*pcRam_?)(pvVar23,fVar1);
  }
  if (pLVar18 != (Light *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
              (pLVar18,fVar3,(MethodInfo *)0x0);
    CStack_12.r = color->r;
    CStack_12.g = color->g;
    CStack_12.b = color->b;
    CStack_12.a = color->a;
    fVar1 = (this->fields).skyContrast;
    if (_UNK_? < color->r) {
      fVar1 = (float)((uint)fVar1 ^ _UNK_?);
    }
    fVar2 = (this->fields).skyContrast;
    if (_UNK_? < color->g) {
      fVar2 = (float)((uint)fVar2 ^ _UNK_?);
    }
    fVar3 = (this->fields).skyContrast;
    if (_UNK_? < color->b) {
      fVar3 = (float)((uint)fVar3 ^ _UNK_?);
    }
    fVar4 = color->r + fVar1;
    obj_00 = (this->fields).targetCamera;
    fVar6 = color->g + fVar2;
    fVar7 = color->b + fVar3;
    color->r = color->r - fVar1;
    color->g = color->g - fVar2;
    color->b = color->b - fVar3;
    if (obj_00 != (Camera *)0x0) {
      fStack_19 = color->r;
      fStack_20 = color->g;
      fStack_21 = color->b;
      fStack_22 = color->a;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar23 = (obj_00->fields)._._._.m_CachedPtr;
      if (pvVar23 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pcVar14 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar14 = (code *)FUN_?(&UNK_?), pcVar14 == (code *)0x0)) {
        uVar15 = func_?(&UNK_?);
        FUN_?(uVar15,0);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pcRam_? = pcVar14;
      (*pcRam_?)(pvVar23);
      this_00 = (this->fields).horizontalPlane;
      if (this_00 != (MeshRenderer *)0x0) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            ((Renderer *)this_00,(MethodInfo *)0x0);
        CStack_11.a = CStack_12.a;
        CStack_11.g = fVar6;
        CStack_11.r = fVar4;
        CStack_11.b = fVar7;
        if (this_01 != (Material *)0x0) {
          CStack_12.b = fVar7;
          CStack_12.r = fVar4;
          CStack_12.g = fVar6;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetColor
                    (this_01,StringLiteral__Color,&CStack_12,(MethodInfo *)0x0);
          if ((this->fields).OnSkyboxColorChanged != (SkyboxManager_SkyboxColorChangedDelegate *)0x0
             ) {
            pSVar24 = (this->fields).OnSkyboxColorChanged;
            fStack_19 = (this->fields).currentColor.r;
            fStack_20 = (this->fields).currentColor.g;
            fStack_21 = (this->fields).currentColor.b;
            fStack_22 = (this->fields).currentColor.a;
            (*(pSVar24->fields)._._.invoke_impl)
                      ((pSVar24->fields)._._.method_code,&fStack_19,(pSVar24->fields)._._.method);
          }
          return;
        }
      }
    }
    FUN_?();
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void <Awake>b__24_0() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager__Awake_b__24_0
               (SkyboxManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (SkyboxManager *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
  cVar4 = (*pcRam_?)(pvVar2);
  if (cVar4 != '\0') {
    SkyboxManager_ComputeSkyboxSettings
              (this,&(this->fields).targetColor,&(this->fields).targetSunAngle,
               &(this->fields).targetFogDensity,(MethodInfo *)0x0);
    CStack_5.r = (this->fields).targetColor.r;
    CStack_5.g = (this->fields).targetColor.g;
    CStack_5.b = (this->fields).targetColor.b;
    CStack_5.a = (this->fields).targetColor.a;
    SkyboxManager_SetColor
              (this,&CStack_5,(this->fields).targetSunAngle,(this->fields).targetFogDensity,
               (MethodInfo *)0x0);
    (this->fields).initialized = 1;
    return;
  }
  (this->fields).pendingLateInitialization = 1;
  return;
}


/* SkyboxManager() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SkyboxManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  pSVar4 = TypeInfo__SkyboxManager->static_fields;
  uVar5 = _UNK_?;
  (pSVar4->defaultColor).r = (float)_UNK_?;
  uVar6 = _UNK_?;
  (pSVar4->defaultColor).g = (float)uVar5;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar5 = _UNK_?;
  (pSVar4->defaultColor).b = (float)_UNK_?;
  _UNK_? = uVar6;
  uVar3 = _UNK_?;
  (pSVar4->defaultColor).a = (float)uVar5;
  pSVar4 = TypeInfo__SkyboxManager->static_fields;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar5 = _UNK_?;
  (pSVar4->brightAmbient).r = (float)_UNK_?;
  _UNK_? = uVar3;
  uVar3 = _UNK_?;
  (pSVar4->brightAmbient).g = (float)uVar5;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar5 = _UNK_?;
  (pSVar4->brightAmbient).b = (float)_UNK_?;
  _UNK_? = uVar3;
  (pSVar4->brightAmbient).a = (float)uVar5;
  return;
}


/* SkyboxManager() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager__ctor(SkyboxManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVSkybox>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVSkybox>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SkyboxManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).skyContrast = 0.1;
  if (*(int *)&(TypeInfo__SkyboxManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SkyboxManager);
  }
  pSVar1 = TypeInfo__SkyboxManager->static_fields;
  fVar2 = (pSVar1->defaultColor).r;
  fVar3 = (pSVar1->defaultColor).g;
  fVar4 = (pSVar1->defaultColor).b;
  fVar5 = (pSVar1->defaultColor).a;
  (this->fields).currentSunAngle = 80.0;
  (this->fields).currentFogDensity = 0.007;
  (this->fields).currentColor.r = fVar2;
  (this->fields).currentColor.g = fVar3;
  (this->fields).currentColor.b = fVar4;
  (this->fields).currentColor.a = fVar5;
  this_00 = (List_1_MVSkybox_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVSkybox>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVSkybox>__List__);
  bVar6 = iRam_? != 0;
  (this->fields).mvSkyboxes = this_00;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).mvSkyboxes >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
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

