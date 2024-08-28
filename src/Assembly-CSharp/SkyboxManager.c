
/* Void Add(MVSkybox) */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_Add
               (SkyboxManager *this,MVSkybox *skybox,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVSkybox>__Add_MVSkybox_);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (skybox == (MVSkybox *)0x0) goto code_?;
    MVSkybox::MVSkybox_SetDeleteOnlyInteractionFlags(skybox,(MethodInfo *)0x0);
  }
  this_00 = (this->fields).mvSkyboxes;
  if (this_00 != (List_1_MVSkybox_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)skybox,
               MethodInfo__System__Collections__Generic__List<MVSkybox>__Add_MVSkybox_);
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_Awake(SkyboxManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&TypeInfo__MVGameControllerBase__OnPostGameInitDelegate);
    func_?(&MethodInfo__SkyboxManager___Awake_b__24_0__);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__MVGameControllerBase__OnPostGameInitDelegate);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__SkyboxManager___Awake_b__24_0__,(MethodInfo *)0x0);
  pMStack2 =
       (MVGameControllerBase_OnPostGameInitDelegate *)
       mscorlib.dll::System::Delegate::Delegate_Combine
                 ((Delegate *)pMVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pMStack2 == (MVGameControllerBase_OnPostGameInitDelegate *)0x0) {
    TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit =
         (MVGameControllerBase_OnPostGameInitDelegate *)0x0;
code_?:
    func_?();
    return;
  }
  pMVar1 = (MVGameControllerBase_OnPostGameInitDelegate *)0x0;
  if (pMStack2->klass == TypeInfo__MVGameControllerBase__OnPostGameInitDelegate) {
    pMVar1 = pMStack2;
  }
  if (pMVar1 == (MVGameControllerBase_OnPostGameInitDelegate *)0x0) {
    pMStack3 = TypeInfo__MVGameControllerBase__OnPostGameInitDelegate;
    func_?();
    pMStack2 = extraout_ECX;
    pMStack3 = extraout_EDX;
  }
  else {
    TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit = pMVar1;
    pMVar1 = (MVGameControllerBase_OnPostGameInitDelegate *)0x0;
    if (pMStack2->klass == TypeInfo__MVGameControllerBase__OnPostGameInitDelegate) {
      pMVar1 = pMStack2;
    }
    pMStack3 = TypeInfo__MVGameControllerBase__OnPostGameInitDelegate;
    if (pMVar1 != (MVGameControllerBase_OnPostGameInitDelegate *)0x0) goto code_?;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CalcAndSetSkyboxSettings() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_CalcAndSetSkyboxSettings
               (SkyboxManager *this,MethodInfo *method)

{
  fogDensity = &(this->fields).targetFogDensity;
  sunAngle = &(this->fields).targetSunAngle;
  color = &(this->fields).targetColor;
  SkyboxManager_ComputeSkyboxSettings(this,color,sunAngle,fogDensity,(MethodInfo *)0x0);
  SkyboxManager_SetColor(this,*color,*sunAngle,*fogDensity,(MethodInfo *)0x0);
  return;
}


/* Void ComputeSkyboxSettings(Color ByRef, Single ByRef, Single ByRef) */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_ComputeSkyboxSettings
               (SkyboxManager *this,Color *color,float *sunAngle,float *fogDensity,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__System__Linq__Enumerable__Count<MVSkybox>_System__Collections__Generic__IEnumerable<MVSkybox>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<float>_MethodInfo__System__Linq__Enumerable__Select<MVSkybox,_float>_System__Collections__Generic__IEnumerable<MVSkybox>__System__Func<MVSkybox,_float>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<MVSkybox>_MethodInfo__System__Linq__Enumerable__Where<MVSkybox>_System__Collections__Generic__IEnumerable<MVSkybox>__System__Func<MVSkybox,_bool>_
                   );
    func_?(&TypeInfo__System__Func<MVSkybox,_float>);
    func_?(&TypeInfo__System__Func<MVSkybox,_bool>);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<MVSkybox>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<MVSkybox>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__SkyboxManager);
    func_?(&MethodInfo__SkyboxManager____c___ComputeSkyboxSettings_b__30_0_MVSkybox_);
    func_?(&MethodInfo__SkyboxManager____c___ComputeSkyboxSettings_b__30_1_MVSkybox_);
    func_?(&MethodInfo__SkyboxManager____c___ComputeSkyboxSettings_b__30_2_MVSkybox_);
    func_?(&TypeInfo__SkyboxManager____c);
    cRam_? = '\x01';
  }
  source = (this->fields).mvSkyboxes;
  if ((TypeInfo__SkyboxManager____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SkyboxManager____c);
  }
  this_00 = TypeInfo__SkyboxManager____c->static_fields->__9__30_0;
  if (this_00 == (Func_2_MVSkybox_Boolean_ *)0x0) {
    if ((TypeInfo__SkyboxManager____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SkyboxManager____c);
    }
    pSVar4 = TypeInfo__SkyboxManager____c->static_fields->__9;
    this_00 = (Func_2_MVSkybox_Boolean_ *)func_?(TypeInfo__System__Func<MVSkybox,_bool>);
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              ((Func_2_Object_Boolean_ *)this_00,(Object *)pSVar4,
               MethodInfo__SkyboxManager____c___ComputeSkyboxSettings_b__30_0_MVSkybox_,
               (MethodInfo *)0x0);
    TypeInfo__SkyboxManager____c->static_fields->__9__30_0 = this_00;
    func_?(&TypeInfo__SkyboxManager____c->static_fields->__9__30_0,this_00);
  }
  pIVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_2
                     ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Boolean_ *)this_00,
                      System__Collections__Generic__IEnumerable<MVSkybox>_MethodInfo__System__Linq__Enumerable__Where<MVSkybox>_System__Collections__Generic__IEnumerable<MVSkybox>__System__Func<MVSkybox,_bool>_
                     );
  iVar6 = System.Core.dll::System::Linq::Enumerable::Enumerable_Count_2
                    ((IEnumerable_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pIVar5,
                     int_MethodInfo__System__Linq__Enumerable__Count<MVSkybox>_System__Collections__Generic__IEnumerable<MVSkybox>_
                    );
  if (iVar6 == 0) {
    if ((TypeInfo__SkyboxManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar7 = TypeInfo__SkyboxManager->static_fields;
    fVar8 = (pSVar7->defaultColor).g;
    fVar9 = (pSVar7->defaultColor).b;
    fVar10 = (pSVar7->defaultColor).a;
    color->r = (pSVar7->defaultColor).r;
    color->g = fVar8;
    color->b = fVar9;
    color->a = fVar10;
    *fogDensity = 0.007;
    *sunAngle = 80.0;
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  if ((TypeInfo__SkyboxManager____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pFVar11 = TypeInfo__SkyboxManager____c->static_fields->__9__30_1;
  if (pFVar11 == (Func_2_MVSkybox_Single_ *)0x0) {
    if ((TypeInfo__SkyboxManager____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar4 = TypeInfo__SkyboxManager____c->static_fields->__9;
    pFVar11 = (Func_2_MVSkybox_Single_ *)func_?();
    mscorlib.dll::System::Func`2[Object,Single]::Func_2_Object_Single___ctor
              ((Func_2_Object_Single_ *)pFVar11,(Object *)pSVar4,
               MethodInfo__SkyboxManager____c___ComputeSkyboxSettings_b__30_1_MVSkybox_,
               (MethodInfo *)0x0);
    TypeInfo__SkyboxManager____c->static_fields->__9__30_1 = pFVar11;
    func_?();
  }
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_5
                        ((IEnumerable_1_UnityEngine_UIElements_StyleSelectorPart_ *)pIVar5,
                         (Func_2_UnityEngine_UIElements_StyleSelectorPart_Object_ *)pFVar11,
                         System__Collections__Generic__IEnumerable<float>_MethodInfo__System__Linq__Enumerable__Select<MVSkybox,_float>_System__Collections__Generic__IEnumerable<MVSkybox>__System__Func<MVSkybox,_float>_
                        );
  fVar8 = System.Core.dll::System::Linq::Enumerable::Enumerable_Average
                     ((IEnumerable_1_System_Single_ *)source_00,(MethodInfo *)0x0);
  *sunAngle = fVar8;
  if (pIVar5 != (IEnumerable_1_System_Object_ *)0x0) {
    piVar12 = (int *)func_?();
    uStack_1 = 1;
    while (piVar12 != (int *)0x0) {
      fVar8 = 0.0;
      pIVar13 = TypeInfo__System__Collections__IEnumerator;
      piVar14 = piVar12;
      cVar15 = func_?();
      if (cVar15 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar12 != (int *)0x0) {
          fVar8 = 0.0;
          pIVar13 = (IEnumerator__Class *)TypeInfo__System__IDisposable;
          func_?();
          piVar14 = piVar12;
        }
        uStack_1 = 0xffffffff;
        color->r = fVar8;
        color->g = (float)pIVar13;
        color->b = (float)piVar14;
        color->a = 1.0;
        if ((TypeInfo__SkyboxManager____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pFVar11 = TypeInfo__SkyboxManager____c->static_fields->__9__30_2;
        if (pFVar11 == (Func_2_MVSkybox_Single_ *)0x0) {
          if ((TypeInfo__SkyboxManager____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar4 = TypeInfo__SkyboxManager____c->static_fields->__9;
          pFVar11 = (Func_2_MVSkybox_Single_ *)func_?();
          mscorlib.dll::System::Func`2[Object,Single]::Func_2_Object_Single___ctor
                    ((Func_2_Object_Single_ *)pFVar11,(Object *)pSVar4,
                     MethodInfo__SkyboxManager____c___ComputeSkyboxSettings_b__30_2_MVSkybox_,
                     (MethodInfo *)0x0);
          TypeInfo__SkyboxManager____c->static_fields->__9__30_2 = pFVar11;
          func_?();
        }
        pIVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_5
                           ((IEnumerable_1_UnityEngine_UIElements_StyleSelectorPart_ *)pIVar5,
                            (Func_2_UnityEngine_UIElements_StyleSelectorPart_Object_ *)pFVar11,
                            System__Collections__Generic__IEnumerable<float>_MethodInfo__System__Linq__Enumerable__Select<MVSkybox,_float>_System__Collections__Generic__IEnumerable<MVSkybox>__System__Func<MVSkybox,_float>_
                           );
        fVar8 = System.Core.dll::System::Linq::Enumerable::Enumerable_Average
                           ((IEnumerable_1_System_Single_ *)pIVar5,(MethodInfo *)0x0);
        *fogDensity = fVar8;
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (piVar12 == (int *)0x0) break;
      iVar16 = *piVar12;
      uVar17 = 0;
      if (*(ushort *)(iVar16 + 0xb6) != 0) {
        do {
          if (*(IEnumerator_1_MVSkybox___Class **)(*(int *)(iVar16 + 0x58) + (uint)uVar17 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<MVSkybox>) {
            puVar18 = (undefined4 *)
                      (iVar16 + 0xc0 + *(int *)(*(int *)(iVar16 + 0x58) + 4 + (uint)uVar17 * 8) * 8);
            goto code_?;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < *(ushort *)(iVar16 + 0xb6));
      }
      puVar18 = (undefined4 *)func_?();
code_?:
      this_01 = (MVSkybox *)(*(code *)*puVar18)();
      if (this_01 == (MVSkybox *)0x0) break;
      MVSkybox::MVSkybox_get_SkyboxColor((Color *)&stack0xffffff9c,this_01,(MethodInfo *)0x0);
    }
  }
  func_?();
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void Disable() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_Disable
               (SkyboxManager *this,MethodInfo *method)

{
  _Stack_8 = (_union_155)0xffffffff;
  _Stack_c.rgctx_data = (Il2CppRGCTXData *)&DAT_?;
  ppIStack_1 = (Il2CppType **)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &ppIStack_1;
  pIStack_2 = (Il2CppType *)&stack0xffffffbc;
  pIVar3 = (Il2CppType *)&stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVSkybox>__GetEnumerator__);
    cRam_? = '\x01';
    pIVar3 = pIStack_2;
  }
  pIStack_2 = pIVar3;
  this_00 = (this->fields).sunLight;
  if (this_00 != (Light *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).mvSkyboxes;
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      method_00 = (MethodInfo *)&stack0xffffffd8;
      pLVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)method_00,this_01,
                          MethodInfo__System__Collections__Generic__List<MVSkybox>__GetEnumerator__)
      ;
      LStack_5._list = (List_1_System_Object_ *)pLVar4->_list;
      LStack_5._index = pLVar4->_index;
      LStack_5._version = pLVar4->_version;
      LStack_5._current = *(Object **)&pLVar4->_current;
      pIStack_6 = (InvokerMethod)0x0;
      _Stack_8 = (_union_155)0x1;
      pLStack_7 = &LStack_5;
      while( true ) {
        bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_5,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__MoveNext__
                          );
        if (bVar8 == 0) {
          _Stack_8 = (_union_155)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&LStack_5,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__Dispose__
                     ,method_00);
          _Stack_8 = (_union_155)0xffffffff;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this,0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = ppIStack_1;
          return;
        }
        if ((RegexCharClass_SingleRange)LStack_5._current == (RegexCharClass_SingleRange)0x0)
        break;
        MVSkybox::MVSkybox_SetDeleteOnlyInteractionFlags
                  ((MVSkybox *)LStack_5._current,(MethodInfo *)0x0);
      }
    }
  }
  uVar9 = func_?();
  func_?(uVar9);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* IEnumerator DoAnimate() */

IEnumerator *
Assembly-CSharp.dll::SkyboxManager::SkyboxManager_DoAnimate(SkyboxManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SkyboxManager___DoAnimate_d__23);
    cRam_? = '\x01';
  }
  this_00 = (SubscribableVariable_1_System_Int32Enum_ *)
            func_?(TypeInfo__SkyboxManager___DoAnimate_d__23);
  SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
            (this_00,0,(MethodInfo *)0x0);
  if (this_00 != (SubscribableVariable_1_System_Int32Enum_ *)0x0) {
    this_00[1].klass = (SubscribableVariable_1_System_Int32Enum___Class *)this;
    func_?(this_00 + 1);
    return (IEnumerator *)this_00;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void Initialize() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_Initialize
               (SkyboxManager *this,MethodInfo *method)

{
  fogDensity = &(this->fields).targetFogDensity;
  sunAngle = &(this->fields).targetSunAngle;
  color = &(this->fields).targetColor;
  SkyboxManager_ComputeSkyboxSettings(this,color,sunAngle,fogDensity,(MethodInfo *)0x0);
  SkyboxManager_SetColor(this,*color,*sunAngle,*fogDensity,(MethodInfo *)0x0);
  (this->fields).initialized = 1;
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_OnEnable
               (SkyboxManager *this,MethodInfo *method)

{
  ppIVar1 = (Il2CppType **)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (float)&stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<MVSkybox>__GetEnumerator__);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).sunLight;
  if (this_00 != (Light *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).mvSkyboxes;
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      method_00 = (MethodInfo *)&stack0xffffffd8;
      pLVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)method_00,this_01,
                          MethodInfo__System__Collections__Generic__List<MVSkybox>__GetEnumerator__)
      ;
      this_02 = pLVar2->_current;
      pIStack_3 = (InvokerMethod)0x0;
      while( true ) {
        bVar4 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__MoveNext__
                          );
        if (bVar4 == 0) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__Dispose__
                     ,method_00);
          if ((this->fields).pendingLateInitialization != 0) {
            pfVar5 = &(this->fields).targetFogDensity;
            pfVar6 = &(this->fields).targetSunAngle;
            SkyboxManager_ComputeSkyboxSettings
                      (this,&(this->fields).targetColor,pfVar6,pfVar5,(MethodInfo *)0x0);
            SkyboxManager_SetColor
                      (this,(this->fields).targetColor,*pfVar6,*pfVar5,(MethodInfo *)0x0);
            (this->fields).initialized = 1;
          }
          if ((this->fields).initialized != 0) {
            pfVar5 = &(this->fields).targetFogDensity;
            pfVar6 = &(this->fields).targetSunAngle;
            SkyboxManager_ComputeSkyboxSettings
                      (this,&(this->fields).targetColor,pfVar6,pfVar5,(MethodInfo *)0x0);
            pCVar7 = &(this->fields).targetColor;
            ppIVar1 = (Il2CppType **)pCVar7->r;
            SkyboxManager_SetColor(this,*pCVar7,*pfVar6,*pfVar5,(MethodInfo *)0x0);
          }
          *unaff_FS_OFFSET = (float)ppIVar1;
          return;
        }
        if (this_02 == (RegexCharClass_SingleRange)0x0) break;
        MVSkybox::MVSkybox_SetDefaultInteractionFlags((MVSkybox *)this_02,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RefreshColor() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_RefreshColor
               (SkyboxManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_DoAnimate);
    cRam_? = '\x01';
  }
  if ((this->fields).initialized != 0) {
    SkyboxManager_ComputeSkyboxSettings
              (this,&(this->fields).targetColor,&(this->fields).targetSunAngle,
               &(this->fields).targetFogDensity,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine_2
              ((MonoBehaviour *)this,StringLiteral_DoAnimate,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine
              ((MonoBehaviour *)this,StringLiteral_DoAnimate,(MethodInfo *)0x0);
  }
  return;
}


/* Void Remove(MVSkybox) */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_Remove
               (SkyboxManager *this,MVSkybox *skybox,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).mvSkyboxes;
  if (this_00 != (List_1_MVSkybox_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Remove
              ((List_1_System_Object_ *)this_00,(Object *)skybox,
               MethodInfo__System__Collections__Generic__List<MVSkybox>__Remove_MVSkybox_);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ResetAmbientLight() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_ResetAmbientLight(MethodInfo *method)

{
  value.g = (float)_UNK_?;
  value.r = (float)_UNK_?;
  value.b = (float)_UNK_?;
  value.a = _UNK_?;
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_ambientLight
            (value,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_ambientIntensity
            (1.0,(MethodInfo *)0x0);
  return;
}


/* Void SetColor(Color, Single, Single) */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_SetColor
               (SkyboxManager *this,Color color,float sunAngle,float fogDensity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SkyboxManager);
    func_?(&StringLiteral__Color);
    cRam_? = '\x01';
  }
  fStack_1 = sunAngle;
  puStack_2 = (undefined *)0x0;
  (this->fields).currentSunAngle = sunAngle;
  (this->fields).currentColor.r = color.r;
  (this->fields).currentColor.g = color.g;
  (this->fields).currentColor.b = color.b;
  (this->fields).currentColor.a = color.a;
  (this->fields).currentFogDensity = fogDensity;
  fVar3 = color.r * _UNK_? + color.g * _UNK_? + color.b * _UNK_?;
  cVar4 = fVar3 < 0.0;
  if ((bool)cVar4) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = _UNK_?;
    if (fVar3 <= _UNK_?) {
      fVar5 = fVar3;
    }
  }
  fVar5 = fVar5 * _UNK_? * fVar5 * fVar5 + fVar5 * _UNK_? * fVar5;
  fVar5 = ((_UNK_? - fVar5) * _UNK_? + fVar5 * _UNK_?) / _UNK_?;
  fVar6 = color.g;
  fVar7 = color.b;
  fVar8 = color.a;
  if ((TypeInfo__SkyboxManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SkyboxManager);
  }
  pSVar9 = TypeInfo__SkyboxManager->static_fields;
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  else if (_UNK_? < fVar5) {
    fVar5 = _UNK_?;
  }
  fVar10 = ((pSVar9->brightAmbient).r - color.r) * fVar5 + color.r;
  fVar11 = ((pSVar9->brightAmbient).g - color.g) * fVar5 + color.g;
  fVar12 = ((pSVar9->brightAmbient).b - color.b) * fVar5 + color.b;
  fVar5 = ((pSVar9->brightAmbient).a - fVar8) * fVar5 + fVar8;
  if (cVar4 == '\0') {
    if (_UNK_? < fVar3) {
      fVar3 = _UNK_?;
    }
  }
  else {
    fVar3 = 0.0;
  }
  fVar3 = fVar3 * _UNK_? * fVar3 * fVar3 + fVar3 * _UNK_? * fVar3;
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fog
            (1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogMode
            (FogMode__Enum_ExponentialSquared,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogStartDistance
            (400.0,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogEndDistance
            (500.0,(MethodInfo *)0x0);
  value_00.g = fVar6;
  value_00.r = color.r;
  value_00.b = fVar7;
  value_00.a = fVar8;
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogColor
            (value_00,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogDensity
            (fogDensity,(MethodInfo *)0x0);
  fVar3 = ((_UNK_? - fVar3) * _UNK_? + fVar3 * _UNK_?) * _UNK_? +
           _UNK_?;
  fVar12 = fVar12 * fVar3;
  value_01.g = fVar11 * fVar3;
  value_01.r = fVar10 * fVar3;
  value_01.b = fVar12;
  value_01.a = fVar5 * fVar3;
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_ambientLight
            (value_01,(MethodInfo *)0x0);
  pLVar13 = (this->fields).sunLight;
  if (pLVar13 != (Light *)0x0) {
    this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pLVar13,(MethodInfo *)0x0);
    euler.y = (float)_UNK_?;
    euler.x = fStack_1 * _UNK_?;
    euler.z = 0.0;
    pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&fStack_1,euler,(MethodInfo *)0x0);
    if (this_03 != (Transform *)0x0) {
      fVar3 = pQVar14->x;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (this_03,*pQVar14,(MethodInfo *)0x0);
      pLVar13 = (this->fields).sunLight;
      fVar5 = (float)((uint)((this->fields).currentSunAngle - _UNK_?) & _UNK_?);
      if (_UNK_? < fVar5) {
        if (pLVar13 == (Light *)0x0) goto code_?;
        fVar5 = 0.0;
      }
      else {
        this_00 = (this->fields).lightDuskDawnFalloff;
        if ((this_00 == (AnimationCurve *)0x0) ||
           (fVar5 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                              (this_00,fVar5 / _UNK_?,(MethodInfo *)0x0),
           pLVar13 == (Light *)0x0)) goto code_?;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                (pLVar13,fVar5,(MethodInfo *)0x0);
      fVar5 = (this->fields).skyContrast;
      fVar7 = fVar5;
      if (_UNK_? < fVar3) {
        fVar7 = (float)((uint)fVar5 ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      }
      fVar8 = fVar5;
      if (_UNK_? < 3.2298447e-29) {
        fVar8 = (float)((uint)fVar5 ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      }
      if (_UNK_? < fVar12) {
        fVar5 = (float)((uint)fVar5 ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
      }
      this_01 = (this->fields).targetCamera;
      fVar11 = fVar3 + fVar7;
      fVar10 = fVar8 + 3.2298447e-29;
      if (this_01 != (Camera *)0x0) {
        puVar15 = &UNK_?;
        value_02.g = 3.2298447e-29 - fVar8;
        value_02.r = fVar3 - fVar7;
        value_02.b = fVar12 - fVar5;
        value_02.a = color.a;
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                  (this_01,value_02,(MethodInfo *)0x0);
        this_02 = (this->fields).horizontalPlane;
        if ((this_02 != (MeshRenderer *)0x0) &&
           (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                ((Renderer *)this_02,(MethodInfo *)0x0), this_04 != (Material *)0x0)
           ) {
          value.y = fVar10;
          value.x = fVar11;
          value.z = (float)puVar15;
          value.w = fVar6;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_04,StringLiteral__Color,value,(MethodInfo *)0x0);
          pSVar16 = (this->fields).OnSkyboxColorChanged;
          if (pSVar16 != (SkyboxManager_SkyboxColorChangedDelegate *)0x0) {
            pvStack17 = (pSVar16->fields)._._.method;
            fStack18 = (this->fields).currentColor.r;
            fStack19 = (this->fields).currentColor.g;
            fStack20 = (this->fields).currentColor.b;
            fStack21 = (this->fields).currentColor.a;
            (*(pSVar16->fields)._._.invoke_impl)();
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void <Awake>b__24_0() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager__Awake_b__24_0
               (SkyboxManager *this,MethodInfo *method)

{
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                    ((Behaviour *)this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    (this->fields).pendingLateInitialization = 1;
    return;
  }
  fogDensity = &(this->fields).targetFogDensity;
  sunAngle = &(this->fields).targetSunAngle;
  color = &(this->fields).targetColor;
  SkyboxManager_ComputeSkyboxSettings(this,color,sunAngle,fogDensity,(MethodInfo *)0x0);
  this_00 = (SkyboxManager *)*fogDensity;
  SkyboxManager_SetColor(this_00,*color,*sunAngle,(float)this_00,(MethodInfo *)0x0);
  (this_00->fields).initialized = 1;
  return;
}


/* SkyboxManager() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SkyboxManager);
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  pSVar4 = TypeInfo__SkyboxManager->static_fields;
  (pSVar4->defaultColor).r = _UNK_?;
  (pSVar4->defaultColor).g = fVar3;
  (pSVar4->defaultColor).b = fVar2;
  (pSVar4->defaultColor).a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  pSVar4 = TypeInfo__SkyboxManager->static_fields;
  (pSVar4->brightAmbient).r = _UNK_?;
  (pSVar4->brightAmbient).g = fVar3;
  (pSVar4->brightAmbient).b = fVar2;
  (pSVar4->brightAmbient).a = fVar1;
  return;
}


/* SkyboxManager() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager__ctor(SkyboxManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVSkybox>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVSkybox>);
    func_?(&TypeInfo__SkyboxManager);
    cRam_? = '\x01';
  }
  (this->fields).skyContrast = 0.1;
  if ((TypeInfo__SkyboxManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SkyboxManager);
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
            func_?(TypeInfo__System__Collections__Generic__List<MVSkybox>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVSkybox>__List__);
  ppLVar6 = &(this->fields).mvSkyboxes;
  *ppLVar6 = this_00;
  func_?(ppLVar6,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

