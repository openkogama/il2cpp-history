
/* Void Activate() */

void Assembly-CSharp.dll::Theme::Theme_Activate(Theme *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).overrideSkyboxManager != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 == (MVGameControllerBase *)0x0) ||
       (this_00 = (pMVar1->fields).skyboxManager, this_00 == (SkyboxManager *)0x0))
    goto code_?;
    SkyboxManager::SkyboxManager_Disable(this_00,(MethodInfo *)0x0);
  }
  LStack_2._list = (List_1_System_Object_ *)(this->fields).components;
  if ((List_1_ThemeComponent_ *)LStack_2._list != (List_1_ThemeComponent_ *)0x0) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(((List_1_ThemeComponent_ *)LStack_2._list)->fields)._version <<
                 0x20);
    uStack_9 = 0;
    LStack_2._8_8_ = pLStack_8;
    LStack_2._current = (Object *)0x0;
    uStack_4 = 0;
    pLStack_8 = &LStack_2;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_2,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                        );
      if (bVar10 == 0) {
        return;
      }
      if (LStack_2._current == (Object *)0x0) break;
      (*(code *)(LStack_2._current)->klass[1]._0.image)
                (LStack_2._current,(LStack_2._current)->klass[1]._0.gc_desc);
    }
    FUN_?();
    FUN_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Add(ThemeComponent) */

void Assembly-CSharp.dll::Theme::Theme_Add(Theme *this,ThemeComponent *component,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ThemeComponent>__Add_ThemeComponent_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MethodInfo__System__Collections__Generic__List<ThemeComponent>__Add_ThemeComponent_;
  pLVar2 = (this->fields).components;
  if (pLVar2 != (List_1_ThemeComponent_ *)0x0) {
    piVar3 = &(pLVar2->fields)._version;
    *piVar3 = *piVar3 + 1;
    pTVar4 = (pLVar2->fields)._items;
    if (pTVar4 != (ThemeComponent__Array *)0x0) {
      uVar5 = (pLVar2->fields)._size;
      if (uVar5 < (uint)pTVar4->max_length) {
        (pLVar2->fields)._size = uVar5 + 1;
      }
      else {
        uVar5 = (pLVar2->fields)._size;
        FUN_?(pLVar2,uVar5 + 1,
                      (pMVar1->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy
                      ,pTVar4,unaff_RDI);
        pTVar4 = (pLVar2->fields)._items;
        (pLVar2->fields)._size = uVar5 + 1;
        if (pTVar4 == (ThemeComponent__Array *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((uint)pTVar4->max_length <= uVar5) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      bVar7 = iRam_? != 0;
      pTVar4->vector[(int)uVar5] = component;
      if (bVar7) {
        uVar5 = (uint)((ulonglong)(pTVar4->vector + (int)uVar5) >> 0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Deactivate() */

void Assembly-CSharp.dll::Theme::Theme_Deactivate(Theme *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).overrideSkyboxManager != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 == (MVGameControllerBase *)0x0) ||
       (this_00 = (pMVar1->fields).skyboxManager, this_00 == (SkyboxManager *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
  }
  LStack_2._list = (List_1_System_Object_ *)(this->fields).components;
  if ((List_1_ThemeComponent_ *)LStack_2._list != (List_1_ThemeComponent_ *)0x0) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(((List_1_ThemeComponent_ *)LStack_2._list)->fields)._version <<
                 0x20);
    uStack_9 = 0;
    LStack_2._8_8_ = pLStack_8;
    LStack_2._current = (Object *)0x0;
    uStack_4 = 0;
    pLStack_8 = &LStack_2;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_2,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeComponent>__MoveNext__
                        );
      if (bVar10 == 0) {
        return;
      }
      if (LStack_2._current == (Object *)0x0) break;
      (*(code *)(LStack_2._current)->klass[1]._0.name)
                (LStack_2._current,(LStack_2._current)->klass[1]._0.namespaze);
    }
    FUN_?();
    FUN_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Initialize(Int32) */

void Assembly-CSharp.dll::Theme::Theme_Initialize(Theme *this,int32_t woid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeSettings__SettingsSerialized);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (SettingsSerialized *)FUN_?(TypeInfo__ThemeSettings__SettingsSerialized);
  ThemeSettings::SettingsSerialized::SettingsSerialized__ctor(this_01,woid,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._Settings_k__BackingField = (SettingsWrapper *)this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._Settings_k__BackingField >> 0xc);
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
  (*(this->klass->vtable).__unknown_4.methodPtr)(this);
  this_00 = (this->fields)._Settings_k__BackingField;
  if (this_00 == (SettingsWrapper *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  ThemeSettings::SettingsWrapper::SettingsWrapper_Initialize(this_00,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).__unknown_3.methodPtr)(this,(this->klass->vtable).__unknown_3.method);
  return;
}


/* Void InitializeForPreview() */

void Assembly-CSharp.dll::Theme::Theme_InitializeForPreview(Theme *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ThemeSettings__SettingsPreview);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (SettingsWrapper *)FUN_?(TypeInfo__ThemeSettings__SettingsPreview);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ThemeSettings::SettingsWrapper::SettingsWrapper__ctor(pSVar1,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  iVar2 = iRam_?;
  (pSVar1->fields).settingsData = (Dictionary_2_System_Object_System_Object_ *)this_00;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&pSVar1->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields)._Settings_k__BackingField = pSVar1;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields)._Settings_k__BackingField >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  (*(this->klass->vtable).__unknown_4.methodPtr)(this);
  pSVar1 = (this->fields)._Settings_k__BackingField;
  if (pSVar1 == (SettingsWrapper *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  ThemeSettings::SettingsWrapper::SettingsWrapper_Initialize(pSVar1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(this->klass->vtable).__unknown_3.methodPtr)(this,(this->klass->vtable).__unknown_3.method);
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::Theme::Theme_Initialize_1(Theme *this,MethodInfo *method)

{
  (*(this->klass->vtable).__unknown_4.methodPtr)();
  this_00 = (this->fields)._Settings_k__BackingField;
  if (this_00 != (SettingsWrapper *)0x0) {
    ThemeSettings::SettingsWrapper::SettingsWrapper_Initialize(this_00,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).__unknown_3.methodPtr)(this,(this->klass->vtable).__unknown_3.method);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Purchase(Int32) */

void Assembly-CSharp.dll::Theme::Theme_Purchase(Theme *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pSVar3 = (this->fields)._Settings_k__BackingField, pSVar3 != (SettingsWrapper *)0x0)) {
    pMVar4 = (pMVar2->fields).operationRequests;
    value = (pSVar3->fields).settingsData;
    if (pMVar4 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      aiStackX_20[0]._0_1_ = 0xc1;
      pOVar5 = (Object *)FUN_?(uRam_?,aiStackX_20);
      aiStackX_20[0] = id;
      value_00 = (Object *)FUN_?(uRam_?,aiStackX_20);
      if (this_00 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar5,value_00,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        aiStackX_20[0]._0_1_ = 0xd1;
        pOVar5 = (Object *)FUN_?(uRam_?,aiStackX_20);
        pMVar6 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this_00,pOVar5,(Object *)value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pMVar6 >> 8),2),pMVar6);
        uVar7 = 0;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                        ,8,this_00,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        pOVar5 = (Object *)FUN_?(uRam_?,&stack0x00000010);
        if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
          uVar8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),2);
          pMVar6 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method;
          uVar9 = (undefined7)((ulonglong)pMVar6 >> 8);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_01,0x61,pOVar5,(InsertionBehavior__Enum)uVar8,pMVar6);
          uVar7 = CONCAT71(uVar9,0x62);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
          Dictionary_2_System_Byte_System_Object__TryInsert
                    (this_01,0x62,(Object *)this_00,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar8 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                     ->klass->rgctx_data[0x22].method);
          pPVar10 = (pMVar4->fields).peer;
          if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
          }
          if (pPVar10 != (PhotonPeer *)0x0) {
            (*(pPVar10->klass->vtable).SendOperation.methodPtr)
                      (pPVar10,CONCAT71((int7)((ulonglong)uVar7 >> 8),0x24),this_01,
                       TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable
                       ,(pPVar10->klass->vtable).SendOperation.method);
            return;
          }
        }
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* List`1[UnityEngine.RectTransform] get_Controllers() */

List_1_UnityEngine_RectTransform_ *
Assembly-CSharp.dll::Theme::Theme_get_Controllers(Theme *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__List_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::RectTransform>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__List<UnityEngine::RectTransform>
                            );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
  RenderTreeManager+VisualChangesProcessor+EntryProcessingInfo]::
  List_1_UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___ctor_2
            (this_00,0,
             MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__List_int_);
  return (List_1_UnityEngine_RectTransform_ *)this_00;
}

