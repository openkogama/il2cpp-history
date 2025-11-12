
/* Int32 Constrain(Int32) */

int32_t Assembly-CSharp.dll::ThemeAttributes::IntAttribute::IntAttribute_Constrain
                  (IntAttribute *this,int32_t value,MethodInfo *method)

{
  iVar1 = (this->fields).min;
  if ((iVar1 <= value) && (iVar1 = (this->fields).max, value <= iVar1)) {
    iVar1 = value;
  }
  return iVar1;
}


/* RectTransform GetSettingsUIObject() */

RectTransform *
Assembly-CSharp.dll::ThemeAttributes::IntAttribute::IntAttribute_GetSettingsUIObject
          (IntAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ThemeAttributes__IntAttribute__Setter_MethodInfo__UnityEngine__Object__Instantiate<ThemeAttributes::IntAttribute::Setter>_ThemeAttributes__IntAttribute__Setter_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this->fields).prefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original,
                       ThemeAttributes__IntAttribute__Setter_MethodInfo__UnityEngine__Object__Instantiate<ThemeAttributes::IntAttribute::Setter>_ThemeAttributes__IntAttribute__Setter_
                      );
  uVar1 = FUN_?(TypeInfo__System__Action<int>);
  FUN_?(uVar1,this,(this->klass->vtable).OnSettingsChanged.method);
  if (this_00 == (Component *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pRVar3 = (RectTransform *)(*pcVar2)();
    return pRVar3;
  }
  (*(code *)this_00->klass[1]._0.image)(this_00,this,uVar1,this_00->klass[1]._0.gc_desc);
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     (this_00,(MethodInfo *)0x0);
  pTVar5 = pTVar4;
  if (pTVar4 != (Transform *)0x0) {
    pTVar5 = (Transform *)0x0;
    if (pTVar4->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar5 = pTVar4;
    }
    if (pTVar5 == (Transform *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pRVar3 = (RectTransform *)(*pcVar2)();
      return pRVar3;
    }
  }
  return (RectTransform *)pTVar5;
}


/* Void Initialize(SettingsWrapper, String, Int32, Action`1[Int32]) */

void Assembly-CSharp.dll::ThemeAttributes::IntAttribute::IntAttribute_Initialize
               (IntAttribute *this,SettingsWrapper *settings,String *key,int32_t groups,
               Action_1_Int32_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__ThemeAttributes__NamedThemeAttribute<int>__Initialize_ThemeSettings__SettingsWrapper__System__String__int__System__Action<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  int_MethodInfo__ThemeSettings__SettingsWrapper__GetValueForAttribute<int>_ThemeAttributes__ThemeAttribute_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__ThemeAttributes__NamedThemeAttribute<int>__Initialize_ThemeSettings__SettingsWrapper__System__String__int__System__Action<int>_
  ;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this != (IntAttribute *)0x0) {
    ThemeAttribute::ThemeAttribute_Initialize
              ((ThemeAttribute *)this,settings,key,groups,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields)._._.themeCallback = onChange;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields)._._.themeCallback >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pSVar7 = TM::TM__((this->fields)._.name,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields)._.name = pSVar7;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields)._.name >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,pMVar1->klass->rgctx_data[3].rgctxDataDummy,(MethodInfo *)0x0)
    ;
    TM::TM_LanguageChanged((Action *)this_02,(MethodInfo *)0x0);
    pMVar1 = 
    int_MethodInfo__ThemeSettings__SettingsWrapper__GetValueForAttribute<int>_ThemeAttributes__ThemeAttribute_
    ;
    if (settings != (SettingsWrapper *)0x0) {
      if ((
          int_MethodInfo__ThemeSettings__SettingsWrapper__GetValueForAttribute<int>_ThemeAttributes__ThemeAttribute_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
        LOCK();
        UNLOCK();
        if ((pMVar1->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar1);
        }
      }
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)(settings->fields).settingsData;
      if (this_00 !=
          (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *
          )0x0) {
        iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          (this_00,(Object *)(this->fields)._._._._Key_k__BackingField,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           ->klass->rgctx_data[0x21].method);
        if (iVar8 < 0) {
          pOVar9 = (Object *)
                   (*(this->klass->vtable).get_Data.methodPtr)
                             (this,(this->klass->vtable).get_Data.method);
          lVar4 = *(longlong *)(pMVar1->field7_0x38).methodMetadataHandle;
          if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_?(lVar4);
          }
          if (pOVar9 != (Object *)0x0) {
            if ((pOVar9->klass->_0).element_class != *(Il2CppClass **)(lVar4 + 0x40)) {
              FUN_?(pOVar9,lVar4);
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
code_?:
            iVar11 = *(int *)&pOVar9[1].klass;
            iVar12 = (this->fields).min;
            if ((iVar11 < iVar12) || (iVar12 = (this->fields).max, iVar12 < iVar11)) {
              iVar11 = iVar12;
            }
            (this->fields)._._.value = iVar11;
            return;
          }
        }
        else {
          this_01 = (settings->fields).settingsData;
          if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (this_01,(Object *)(this->fields)._._._._Key_k__BackingField,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            lVar4 = *(longlong *)(pMVar1->field7_0x38).methodMetadataHandle;
            if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_?(lVar4);
            }
            if (pOVar9 != (Object *)0x0) {
              if ((pOVar9->klass->_0).element_class != *(Il2CppClass **)(lVar4 + 0x40)) {
                FUN_?(pOVar9,lVar4);
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnSettingsChanged(Int32) */

void Assembly-CSharp.dll::ThemeAttributes::IntAttribute::IntAttribute_OnSettingsChanged
               (IntAttribute *this,int32_t value,MethodInfo *method)

{
  iVar1 = (this->fields).min;
  if ((value < iVar1) || (iVar1 = (this->fields).max, iVar1 < value)) {
    value = iVar1;
  }
  key = (this->fields)._._._._Key_k__BackingField;
  (this->fields)._._.value = value;
  value_00 = (Object *)
             (*(this->klass->vtable).get_Data.methodPtr)(this,(this->klass->vtable).get_Data.method)
  ;
  ThemeAttribute::ThemeAttribute_UpdateSettings
            ((ThemeAttribute *)this,key,value_00,(MethodInfo *)0x0);
  pAVar2 = (this->fields)._._.themeCallback;
  if (pAVar2 != (Action_1_Int32_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,(this->fields)._._.value,(pAVar2->fields)._._.method
              );
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* IntAttribute() */

void Assembly-CSharp.dll::ThemeAttributes::IntAttribute::IntAttribute__ctor
               (IntAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__ThemeAttributes__NamedThemeAttribute<int>__NamedThemeAttribute__);
    LOCK();
    UNLOCK();
    cRam_? = 1;
    (this->fields).min = -0x80000000;
    (this->fields).max = 0x7fffffff;
    return;
  }
  (this->fields).min = -0x80000000;
  (this->fields).max = 0x7fffffff;
  return;
}


/* Object get_Data() */

Object * Assembly-CSharp.dll::ThemeAttributes::IntAttribute::IntAttribute_get_Data
                   (IntAttribute *this,MethodInfo *method)

{
  aiStackX_8[0] = (this->fields)._._.value;
  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_8);
  return pOVar1;
}

