
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
  if (this_00 == (NavMesh_OnNavMeshPreUpdate *)0x0) {
    func_?();
    pMStack2 = extraout_ECX;
    pMStack3 = extraout_EDX;
  }
  else {
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__SkyboxManager___Awake_b__24_0__,(MethodInfo *)0x0)
    ;
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
    pMStack3 = TypeInfo__MVGameControllerBase__OnPostGameInitDelegate;
    if (pMVar1 == (MVGameControllerBase_OnPostGameInitDelegate *)0x0) goto code_?;
    TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit = pMVar1;
    pMVar1 = (MVGameControllerBase_OnPostGameInitDelegate *)0x0;
    if (pMStack2->klass == TypeInfo__MVGameControllerBase__OnPostGameInitDelegate) {
      pMVar1 = pMStack2;
    }
    pMStack3 = TypeInfo__MVGameControllerBase__OnPostGameInitDelegate;
    if (pMVar1 != (MVGameControllerBase_OnPostGameInitDelegate *)0x0) goto code_?;
  }
  pMStack3 = (MVGameControllerBase_OnPostGameInitDelegate__Class *)func_?();
  pMStack2 = extraout_ECX_00;
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void CalcAndSetSkyboxSettings() */

void Assembly-CSharp.dll::SkyboxManager::SkyboxManager_CalcAndSetSkyboxSettings
               (SkyboxManager *this,MethodInfo *method)

{
  SkyboxManager_ComputeSkyboxSettings
            (this,&(this->fields).targetColor,&(this->fields).targetSunAngle,
             &(this->fields).targetFogDensity,(MethodInfo *)0x0);
  SkyboxManager_SetColor
            (this,(this->fields).targetColor,(this->fields).targetSunAngle,
             (this->fields).targetFogDensity,(MethodInfo *)0x0);
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
    if (this_00 == (Func_2_MVSkybox_Boolean_ *)0x0) goto code_?;
    mscorlib.dll::System::Func`2[Object,Boolean]::Func_2_Object_Boolean___ctor
              ((Func_2_Object_Boolean_ *)this_00,(Object *)pSVar4,
               MethodInfo__SkyboxManager____c___ComputeSkyboxSettings_b__30_0_MVSkybox_,
               (MethodInfo *)0x0);
    TypeInfo__SkyboxManager____c->static_fields->__9__30_0 = this_00;
    func_?();
  }
  source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_4
                        ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Boolean_ *)this_00,
                         System__Collections__Generic__IEnumerable<MVSkybox>_MethodInfo__System__Linq__Enumerable__Where<MVSkybox>_System__Collections__Generic__IEnumerable<MVSkybox>__System__Func<MVSkybox,_bool>_
                        );
  iVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_Count_1
                    (source_00,
                     int_MethodInfo__System__Linq__Enumerable__Count<MVSkybox>_System__Collections__Generic__IEnumerable<MVSkybox>_
                    );
  if (iVar5 == 0) {
    if ((TypeInfo__SkyboxManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar6 = TypeInfo__SkyboxManager->static_fields;
    fVar7 = (pSVar6->defaultColor).g;
    fVar8 = (pSVar6->defaultColor).b;
    fVar9 = (pSVar6->defaultColor).a;
    color->r = (pSVar6->defaultColor).r;
    color->g = fVar7;
    color->b = fVar8;
    color->a = fVar9;
    *fogDensity = 0.007;
    *sunAngle = 80.0;
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  if ((TypeInfo__SkyboxManager____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pFVar10 = TypeInfo__SkyboxManager____c->static_fields->__9__30_1;
  if (pFVar10 == (Func_2_MVSkybox_Single_ *)0x0) {
    if ((TypeInfo__SkyboxManager____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar4 = TypeInfo__SkyboxManager____c->static_fields->__9;
    pFVar10 = (Func_2_MVSkybox_Single_ *)func_?();
    if (pFVar10 == (Func_2_MVSkybox_Single_ *)0x0) goto code_?;
    mscorlib.dll::System::Func`2[Object,Single]::Func_2_Object_Single___ctor
              ((Func_2_Object_Single_ *)pFVar10,(Object *)pSVar4,
               MethodInfo__SkyboxManager____c___ComputeSkyboxSettings_b__30_1_MVSkybox_,
               (MethodInfo *)0x0);
    TypeInfo__SkyboxManager____c->static_fields->__9__30_1 = pFVar10;
    func_?();
  }
  pIVar11 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_4
                      (source_00,(Func_2_Object_Single_ *)pFVar10,
                       System__Collections__Generic__IEnumerable<float>_MethodInfo__System__Linq__Enumerable__Select<MVSkybox,_float>_System__Collections__Generic__IEnumerable<MVSkybox>__System__Func<MVSkybox,_float>_
                      );
  fVar7 = System.Core.dll::System::Linq::Enumerable::Enumerable_Average(pIVar11,(MethodInfo *)0x0);
  *sunAngle = fVar7;
  if (source_00 != (IEnumerable_1_System_Object_ *)0x0) {
    piVar12 = (int *)func_?();
    uStack_1 = 1;
    while (piVar12 != (int *)0x0) {
      fVar7 = 0.0;
      pIVar13 = TypeInfo__System__Collections__IEnumerator;
      piVar14 = piVar12;
      cVar15 = func_?();
      if (cVar15 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar12 != (int *)0x0) {
          fVar7 = 0.0;
          pIVar13 = (IEnumerator__Class *)TypeInfo__System__IDisposable;
          func_?();
          piVar14 = piVar12;
        }
        uStack_1 = 0xffffffff;
        color->r = fVar7;
        color->g = (float)pIVar13;
        color->b = (float)piVar14;
        color->a = 1.0;
        if ((TypeInfo__SkyboxManager____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pFVar10 = TypeInfo__SkyboxManager____c->static_fields->__9__30_2;
        if (pFVar10 == (Func_2_MVSkybox_Single_ *)0x0) {
          if ((TypeInfo__SkyboxManager____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar4 = TypeInfo__SkyboxManager____c->static_fields->__9;
          pFVar10 = (Func_2_MVSkybox_Single_ *)func_?();
          if (pFVar10 == (Func_2_MVSkybox_Single_ *)0x0) break;
          mscorlib.dll::System::Func`2[Object,Single]::Func_2_Object_Single___ctor
                    ((Func_2_Object_Single_ *)pFVar10,(Object *)pSVar4,
                     MethodInfo__SkyboxManager____c___ComputeSkyboxSettings_b__30_2_MVSkybox_,
                     (MethodInfo *)0x0);
          TypeInfo__SkyboxManager____c->static_fields->__9__30_2 = pFVar10;
          func_?();
        }
        pIVar11 = System.Core.dll::System::Linq::Enumerable::Enumerable_Select_4
                            (source_00,(Func_2_Object_Single_ *)pFVar10,
                             System__Collections__Generic__IEnumerable<float>_MethodInfo__System__Linq__Enumerable__Select<MVSkybox,_float>_System__Collections__Generic__IEnumerable<MVSkybox>__System__Func<MVSkybox,_float>_
                            );
        fVar7 = System.Core.dll::System::Linq::Enumerable::Enumerable_Average
                           (pIVar11,(MethodInfo *)0x0);
        *fogDensity = fVar7;
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (piVar12 == (int *)0x0) break;
      iVar16 = *piVar12;
      uVar17 = 0;
      if (*(ushort *)(iVar16 + 0xb2) != 0) {
        do {
          if (*(IEnumerator_1_MVSkybox___Class **)(*(int *)(iVar16 + 0x58) + (uint)uVar17 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<MVSkybox>) {
            puVar18 = (undefined4 *)
                      (*(int *)(*(int *)(iVar16 + 0x58) + 4 + (uint)uVar17 * 8) * 8 + 0xbc + iVar16);
            goto code_?;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < *(ushort *)(iVar16 + 0xb2));
      }
      puVar18 = (undefined4 *)func_?();
code_?:
      this_01 = (MVSkybox *)(*(code *)*puVar18)();
      if (this_01 == (MVSkybox *)0x0) break;
      MVSkybox::MVSkybox_get_SkyboxColor((Color *)&stack0xffffff98,this_01,(MethodInfo *)0x0);
    }
  }
code_?:
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
  LStack_4._list = (List_1_System_Object_ *)0x0;
  LStack_4._index = 0;
  LStack_4._version = 0;
  LStack_4._current = (Object *)0x0;
  this_00 = (this->fields).sunLight;
  if (this_00 != (Light *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).mvSkyboxes;
    if (this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      method_00 = (MethodInfo *)&stack0xffffffd8;
      pLVar5 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)method_00,this_01,
                          MethodInfo__System__Collections__Generic__List<MVSkybox>__GetEnumerator__)
      ;
      LStack_4._list = (List_1_System_Object_ *)pLVar5->_list;
      LStack_4._index = pLVar5->_index;
      LStack_4._version = pLVar5->_version;
      LStack_4._current = *(Object **)&pLVar5->_current;
      pIStack_6 = (InvokerMethod)0x0;
      _Stack_8 = (_union_155)0x1;
      pLStack_7 = &LStack_4;
      while( true ) {
        bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_4,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__MoveNext__
                          );
        if (bVar8 == 0) {
          _Stack_8 = (_union_155)0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&LStack_4,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__Dispose__
                     ,method_00);
          _Stack_8 = (_union_155)0xffffffff;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this,0,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = ppIStack_1;
          return;
        }
        if ((RegexCharClass_SingleRange)LStack_4._current == (RegexCharClass_SingleRange)0x0)
        break;
        MVSkybox::MVSkybox_SetDeleteOnlyInteractionFlags
                  ((MVSkybox *)LStack_4._current,(MethodInfo *)0x0);
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
  value = (Object *)func_?(TypeInfo__SkyboxManager___DoAnimate_d__23);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
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
  SkyboxManager_ComputeSkyboxSettings
            (this,&(this->fields).targetColor,&(this->fields).targetSunAngle,
             &(this->fields).targetFogDensity,(MethodInfo *)0x0);
  SkyboxManager_SetColor
            (this,(this->fields).targetColor,(this->fields).targetSunAngle,
             (this->fields).targetFogDensity,(MethodInfo *)0x0);
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
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&stack0xffffffc8,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVSkybox>__Dispose__
                     ,method_00);
          if ((this->fields).pendingLateInitialization != 0) {
            SkyboxManager_ComputeSkyboxSettings
                      (this,&(this->fields).targetColor,&(this->fields).targetSunAngle,
                       &(this->fields).targetFogDensity,(MethodInfo *)0x0);
            SkyboxManager_SetColor
                      (this,(this->fields).targetColor,(this->fields).targetSunAngle,
                       (this->fields).targetFogDensity,(MethodInfo *)0x0);
            (this->fields).initialized = 1;
          }
          if ((this->fields).initialized != 0) {
            SkyboxManager_ComputeSkyboxSettings
                      (this,&(this->fields).targetColor,&(this->fields).targetSunAngle,
                       &(this->fields).targetFogDensity,(MethodInfo *)0x0);
            pCVar5 = &(this->fields).targetColor;
            ppIVar1 = (Il2CppType **)pCVar5->r;
            SkyboxManager_SetColor
                      (this,*pCVar5,(this->fields).targetSunAngle,(this->fields).targetFogDensity,
                       (MethodInfo *)0x0);
          }
          *unaff_FS_OFFSET = (float)ppIVar1;
          return;
        }
        if (this_02 == (RegexCharClass_SingleRange)0x0) break;
        MVSkybox::MVSkybox_SetDefaultInteractionFlags((MVSkybox *)this_02,(MethodInfo *)0x0);
      }
    }
  }
  uVar6 = func_?();
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).mvSkyboxes;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
    RegexCharClass+SingleRange]::
    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Remove
              (this_00,(RegexCharClass_SingleRange)skybox,
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
  if (fVar3 < 0.0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = _UNK_?;
    if (fVar3 <= _UNK_?) {
      fVar4 = fVar3;
    }
  }
  fVar4 = fVar4 * _UNK_? * fVar4 * fVar4 + fVar4 * _UNK_? * fVar4;
  fVar4 = ((_UNK_? - fVar4) * 0.0 + fVar4 * _UNK_?) / _UNK_?;
  fVar5 = color.g;
  fVar6 = color.b;
  fVar7 = color.a;
  if ((TypeInfo__SkyboxManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SkyboxManager);
  }
  pSVar8 = TypeInfo__SkyboxManager->static_fields;
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  else if (_UNK_? < fVar4) {
    fVar4 = _UNK_?;
  }
  fVar9 = ((pSVar8->brightAmbient).r - color.r) * fVar4 + color.r;
  fVar10 = ((pSVar8->brightAmbient).g - color.g) * fVar4 + color.g;
  fVar11 = ((pSVar8->brightAmbient).b - color.b) * fVar4 + color.b;
  fVar4 = ((pSVar8->brightAmbient).a - fVar7) * fVar4 + fVar7;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  else if (_UNK_? < fVar3) {
    fVar3 = _UNK_?;
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
  value_00.g = fVar5;
  value_00.r = color.r;
  value_00.b = fVar6;
  value_00.a = fVar7;
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogColor
            (value_00,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogDensity
            (fogDensity,(MethodInfo *)0x0);
  fVar3 = ((_UNK_? - fVar3) * _UNK_? + fVar3 * _UNK_?) * _UNK_? +
           _UNK_?;
  fVar11 = fVar11 * fVar3;
  value_01.g = fVar10 * fVar3;
  value_01.r = fVar9 * fVar3;
  value_01.b = fVar11;
  value_01.a = fVar4 * fVar3;
  UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_ambientLight
            (value_01,(MethodInfo *)0x0);
  pLVar12 = (this->fields).sunLight;
  if (pLVar12 != (Light *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pLVar12,(MethodInfo *)0x0);
    euler.y = (float)_UNK_?;
    euler.x = fStack_1 * _UNK_?;
    euler.z = 0.0;
    pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&fStack_1,euler,(MethodInfo *)0x0);
    if (this_02 != (Transform *)0x0) {
      fVar3 = pQVar13->x;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (this_02,*pQVar13,(MethodInfo *)0x0);
      pLVar12 = (this->fields).sunLight;
      fVar4 = (float)((uint)((this->fields).currentSunAngle - _UNK_?) & _UNK_?);
      if (_UNK_? < fVar4) {
        if (pLVar12 == (Light *)0x0) goto code_?;
        fVar4 = 0.0;
      }
      else {
        this_00 = (this->fields).lightDuskDawnFalloff;
        if ((this_00 == (AnimationCurve *)0x0) ||
           (fVar4 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                              (this_00,fVar4 / _UNK_?,(MethodInfo *)0x0),
           pLVar12 == (Light *)0x0)) goto code_?;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                (pLVar12,fVar4,(MethodInfo *)0x0);
      fVar4 = (this->fields).skyContrast;
      if (_UNK_? < fVar3) {
        fVar4 = (float)((uint)fVar4 ^
                       __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      }
      fVar6 = (this->fields).skyContrast;
      if (_UNK_? < 3.074889e-29) {
        fVar6 = (float)((uint)fVar6 ^
                        __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      }
      fVar7 = (this->fields).skyContrast;
      if (_UNK_? < fVar11) {
        fVar7 = (float)((uint)fVar7 ^
                        __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      }
      this_04 = (this->fields).targetCamera;
      fVar9 = fVar3 + fVar4;
      if (this_04 != (Camera *)0x0) {
        puVar14 = &UNK_?;
        value_02.g = 3.074889e-29 - fVar6;
        value_02.r = fVar3 - fVar4;
        value_02.b = fVar11 - fVar7;
        value_02.a = color.a;
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_backgroundColor
                  (this_04,value_02,(MethodInfo *)0x0);
        this_01 = (this->fields).horizontalPlane;
        if ((this_01 != (MeshRenderer *)0x0) &&
           (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                ((Renderer *)this_01,(MethodInfo *)0x0), this_03 != (Material *)0x0)
           ) {
          value.y = (float)puVar14;
          value.x = fVar9;
          value.z = (float)this_04;
          value.w = fVar5;
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                    (this_03,StringLiteral__Color,value,(MethodInfo *)0x0);
          if ((this->fields).OnSkyboxColorChanged != (SkyboxManager_SkyboxColorChangedDelegate *)0x0
             ) {
            pSVar15 = (this->fields).OnSkyboxColorChanged;
            fStack16 = (this->fields).currentColor.r;
            fStack17 = (this->fields).currentColor.g;
            fStack18 = (this->fields).currentColor.b;
            fStack19 = (this->fields).currentColor.a;
            pvStack20 = (pSVar15->fields)._._.method;
            (*(pSVar15->fields)._._.invoke_impl)();
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
  SkyboxManager_ComputeSkyboxSettings
            (this,&(this->fields).targetColor,&(this->fields).targetSunAngle,
             &(this->fields).targetFogDensity,(MethodInfo *)0x0);
  SkyboxManager_SetColor
            (this,(this->fields).targetColor,(this->fields).targetSunAngle,
             (this->fields).targetFogDensity,(MethodInfo *)0x0);
  (this->fields).initialized = 1;
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
  if (this_00 != (List_1_MVSkybox_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<MVSkybox>__List__);
    (this->fields).mvSkyboxes = this_00;
    func_?(&(this->fields).mvSkyboxes,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

