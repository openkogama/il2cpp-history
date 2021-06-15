
/* Void Initialize(Theme, RectTransform) */

void Assembly-CSharp.dll::ThemeSettingsMenuBase::ThemeSettingsMenuBase_Initialize
               (ThemeSettingsMenuBase *this,Theme *theme,RectTransform *content,MethodInfo *method)

{
  (this->fields).theme = theme;
  (this->fields).content = content;
  if ((theme != (Theme *)0x0) &&
     (pSVar1 = (theme->fields)._Settings_k__BackingField, pSVar1 != (SettingsWrapper *)0x0)) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    (pSVar1->fields).menu = (IMenu *)this;
    func_?(0,TypeInfo__ThemeSettings__IMenu,this);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ThemeSettingsMenuBase::ThemeSettingsMenuBase_OnDestroy
               (ThemeSettingsMenuBase *this,MethodInfo *method)

{
  pTVar1 = (this->fields).theme;
  if ((pTVar1 != (Theme *)0x0) &&
     (pSVar2 = (pTVar1->fields)._Settings_k__BackingField, pSVar2 != (SettingsWrapper *)0x0)) {
    (pSVar2->fields).menu = (IMenu *)0x0;
    return;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Refresh() */

void Assembly-CSharp.dll::ThemeSettingsMenuBase::ThemeSettingsMenuBase_Refresh
               (ThemeSettingsMenuBase *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff90;
  puVar5 = &stack0xffffff90;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pIStack_6 = (IEnumerator__Class *)0x0;
  CStack_7.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
  CStack_7.monitor = (MonitorData *)0x0;
  CStack_7.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
  CStack_7.fields.syncRoot = (Object *)0x0;
  func_?();
  uStack_8 = 0xffffffff;
  pTVar9 = (Transform *)(this->fields).content;
  piStack_10 = (int *)&stack0xffffff90;
  puStack_4 = &stack0xffffff90;
  if (pTVar9 != (Transform *)0x0) {
    piStack_10 = (int *)&stack0xffffff90;
    puStack_4 = &stack0xffffff90;
    pIVar11 = (IEnumerator__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                       (pTVar9,(MethodInfo *)0x0);
    uStack_1 = 0;
    pIStack_12 = pIVar11;
    while (unaff_ESI = pIVar11, pIVar11 != (IEnumerator__Class *)0x0) {
      cVar13 = func_?(1);
      if (cVar13 == '\0') {
        uStack_8 = 0;
        *piStack_10 = 0x4c;
        pIStack_14 = (IEnumerator__Class *)0x0;
        uStack_1 = 0xffffffff;
        iVar15 = func_?();
        if (iVar15 != 0) {
          func_?(0);
        }
        pIVar16 = pIStack_6;
        obj_00 = pIVar11;
        if (pIStack_6 != (IEnumerator__Class *)0x0) goto code_?;
        if (*piStack_10 == 0x4c) {
          pIStack_14 = (IEnumerator__Class *)0xffffffff;
          uStack_8 = 0xffffffff;
        }
        pTVar17 = (this->fields).theme;
        unaff_ESI = (IEnumerator__Class *)0x0;
        if ((pTVar17 != (Theme *)0x0) &&
           (unaff_ESI = (IEnumerator__Class *)(pTVar17->fields)._Settings_k__BackingField,
           unaff_ESI != (IEnumerator__Class *)0x0)) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pLVar18 = (List_1_VoxelHit_ *)(unaff_ESI->_0).namespaze;
          pIStack_12 = (IEnumerator__Class *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)pIStack_12,(Object *)unaff_ESI,
                     MethodInfo__ThemeSettings__SettingsWrapper___get_SettingsUI_m__0_ThemeAttributes__ThemeAttribute_
                     ,
                     MethodInfo__System__Predicate<ThemeAttributes::ThemeAttribute>__Predicate_System__Object__void__
                    );
          if ((pLVar18 != (List_1_VoxelHit_ *)0x0) &&
             (pLStack_19 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                           List_1_VoxelHit__FindAll
                                     (pLVar18,(Predicate_1_VoxelHit_ *)pIStack_12,
                                      MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__FindAll_System__Predicate<ThemeAttributes::ThemeAttribute>_
                                     ), pLStack_19 != (List_1_VoxelHit_ *)0x0)) {
            mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLStack_19,
                       MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__get_Count__
                      );
            iStack_20 = func_?();
            obj_00 = (IEnumerator__Class *)0x0;
            pIStack_21 = (IEnumerator *)(iStack_20 + 0x10);
            pIStack_22 = pIStack_21;
            goto code_?;
          }
        }
        break;
      }
      pCVar23 = (Component_1 *)func_?(0);
      if (pCVar23 == (Component_1 *)0x0) break;
      pCVar24 = (Component_1 *)0x0;
      if ((RectTransform__Class *)pCVar23->klass == TypeInfo__UnityEngine__RectTransform) {
        pCVar24 = pCVar23;
      }
      if (pCVar24 == (Component_1 *)0x0) goto code_?;
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      (pCVar24,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
    }
  }
  goto code_?;
code_?:
  pLVar18 = pLStack_19;
  pIStack_12 = obj_00;
  pOVar25 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLStack_19,
                       MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__get_Count__
                      );
  iVar15 = iStack_20;
  if ((int)pOVar25 <= (int)obj_00) goto code_?;
  pIVar26 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
            IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                      ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar18,
                       (int32_t)obj_00,
                       MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__get_Item_int_
                      );
  unaff_ESI = obj_00;
  if ((pIVar26 == (IEventSystemHandler *)0x0) ||
     (pIVar11 = (IEnumerator__Class *)(*(code *)pIVar26->klass[1]._0.parent)(), iStack_20 == 0))
  goto code_?;
  if ((pIVar11 != (IEnumerator__Class *)0x0) && (iVar15 = func_?(), iVar15 == 0))
  goto code_?;
  if (*(IEnumerator__Class **)(iStack_20 + 0xc) <= obj_00) goto code_?;
  obj_00 = (IEnumerator__Class *)((int)&(obj_00->_0).image + 1);
  pIStack_21->klass = pIVar11;
  pIStack_21 = (IEnumerator *)&pIStack_21->monitor;
  goto code_?;
code_?:
  cVar13 = func_?();
  obj_00 = pIStack_6;
  if (cVar13 == '\0') goto code_?;
  pTVar9 = (Transform *)
            mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      (&CStack_7,
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::RectTransform>__get_Current__
                      );
  if (pTVar9 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
            (pTVar9,(Transform *)(this->fields).controllerArea,0,(MethodInfo *)0x0);
  goto code_?;
code_?:
  piStack_10[(int)((int)&(unaff_ESI->_0).image + 1)] = 299;
  uStack_1 = 0xffffffff;
  func_?(&CStack_7,
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::RectTransform>__Dispose__
                 );
  if (obj_00 == (IEnumerator__Class *)0x0) {
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  goto code_?;
code_?:
  func_?();
  unaff_ESI = pIVar11;
  goto code_?;
code_?:
  obj_00 = (IEnumerator__Class *)0x0;
  unaff_ESI = obj_00;
  if (iStack_20 != 0) {
    for (; unaff_ESI = obj_00, (int)obj_00 < (int)*(IEnumerator__Class **)(iVar15 + 0xc);
        obj_00 = (IEnumerator__Class *)((int)&(obj_00->_0).image + 1)) {
      if (*(IEnumerator__Class **)(iVar15 + 0xc) <= obj_00) goto code_?;
      if (pIStack_22->klass == (IEnumerator__Class *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                ((Transform *)pIStack_22->klass,(Transform *)(this->fields).content,0,
                 (MethodInfo *)0x0);
      pIStack_22 = (IEnumerator *)&pIStack_22->monitor;
    }
    pTVar9 = (Transform *)(this->fields).controllerArea;
    if (pTVar9 != (Transform *)0x0) {
      pIVar27 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                          (pTVar9,(MethodInfo *)0x0);
      uStack_1 = 2;
      pIStack_22 = pIVar27;
      while (pIVar11 = TypeInfo__System__Collections__IEnumerator, unaff_ESI = obj_00,
            pIVar27 != (IEnumerator *)0x0) {
        pIStack_12 = pIVar27->klass;
        uVar28 = 0;
        pLStack_19 = (List_1_VoxelHit_ *)0x0;
        uVar29._0_1_ = (pIStack_12->_1).rank;
        uVar29._1_1_ = (pIStack_12->_1).minimumAlignment;
        if (uVar29 != 0) {
          do {
            pIVar27 = pIStack_22;
            if (pIStack_12->interfaceOffsets[uVar28].interfaceType ==
                (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
              ppMVar30 = &(&(pIStack_12->vtable).MoveNext)
                          [pIStack_12->interfaceOffsets[uVar28].offset].method;
              goto code_?;
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 < uVar29);
        }
        ppMVar30 = (MethodInfo **)func_?();
code_?:
        cVar13 = (*(code *)*ppMVar30)();
        pIVar16 = pIStack_14;
        if (cVar13 == '\0') {
          obj_00 = (IEnumerator__Class *)((int)&(pIStack_14->_0).image + 1);
          piStack_10[(int)obj_00] = 0xde;
          uStack_1 = 0xffffffff;
          iVar15 = func_?();
          if (iVar15 != 0) {
            func_?(0);
          }
          pIVar11 = pIStack_6;
          if (pIStack_6 != (IEnumerator__Class *)0x0) goto code_?;
          unaff_ESI = obj_00;
          if (((obj_00 != (IEnumerator__Class *)0xffffffff) && (piStack_10[(int)obj_00] == 0xde)) &&
             (-1 < (int)obj_00)) {
            unaff_ESI = pIVar16;
          }
          pTVar17 = (this->fields).theme;
          if ((pTVar17 != (Theme *)0x0) &&
             (this_00 = (List_1_UnityEngine_Color32_ *)
                        (*(code *)(pTVar17->klass->vtable).get_Controllers.method)(),
             this_00 != (List_1_UnityEngine_Color32_ *)0x0)) {
            pLVar31 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                      List_1_UnityEngine_Color32__GetEnumerator
                                ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffff9c,
                                 this_00,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__GetEnumerator__
                                );
            CStack_7.klass =
                 (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)pLVar31->l;
            CStack_7.monitor = (MonitorData *)pLVar31->next;
            CStack_7.fields.list =
                 (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar31->ver;
            CStack_7.fields.syncRoot = (Object *)(pLVar31->current).rgba;
            uStack_1 = 4;
            goto code_?;
          }
          break;
        }
        pCVar23 = (Component_1 *)func_?(0);
        unaff_ESI = pIVar11;
        if (pCVar23 == (Component_1 *)0x0) break;
        pCVar24 = (Component_1 *)0x0;
        if ((RectTransform__Class *)pCVar23->klass == TypeInfo__UnityEngine__RectTransform) {
          pCVar24 = pCVar23;
        }
        if (pCVar24 == (Component_1 *)0x0) goto code_?;
        obj_00 = (IEnumerator__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           (pCVar24,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj_00,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  pIVar16 = (IEnumerator__Class *)func_?();
  obj_00 = unaff_ESI;
code_?:
  func_?(pIVar16);
code_?:
  uVar32 = func_?();
  func_?(uVar32);
code_?:
  uVar32 = func_?();
  pIVar11 = (IEnumerator__Class *)func_?(uVar32);
code_?:
  func_?(pIVar11);
code_?:
  func_?(obj_00,0,0);
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
}

