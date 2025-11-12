
/* Single Constrain(Single) */

float Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_Constrain
                (ColorAttribute *this,float value,MethodInfo *method)

{
  fVar1 = 0.0;
  if ((0.0 <= value) && (fVar1 = _UNK_?, value <= _UNK_?)) {
    fVar1 = value;
  }
  return fVar1;
}


/* Color Constrain(Color) */

Color * Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_Constrain_1
                  (Color *__return_storage_ptr__,ColorAttribute *this,Color *value,
                  MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = value->r;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (_UNK_? < fVar2) {
    fVar2 = _UNK_?;
  }
  value->r = fVar2;
  fVar2 = value->g;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  fVar3 = value->b;
  value->g = fVar2;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  else if (fVar1 < fVar3) {
    fVar3 = fVar1;
  }
  fVar2 = value->a;
  value->b = fVar3;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  else if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  fVar1 = value->g;
  fVar3 = value->b;
  __return_storage_ptr__->r = value->r;
  __return_storage_ptr__->g = fVar1;
  __return_storage_ptr__->b = fVar3;
  __return_storage_ptr__->a = fVar2;
  return __return_storage_ptr__;
}


/* Color ConvertToColor(Dictionary`2[System.Object,System.Object]) */

Color * Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_ConvertToColor
                  (Color *__return_storage_ptr__,Dictionary_2_System_Object_System_Object_ *value,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Alpha);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Red);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Blue);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Green);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (value != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (value,(Object *)StringLiteral_Red,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (value,(Object *)StringLiteral_Green,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (value,(Object *)StringLiteral_Blue,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (value,(Object *)StringLiteral_Alpha,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    lVar5 = lRam_?;
    __return_storage_ptr__->r = 0.0;
    __return_storage_ptr__->g = 0.0;
    __return_storage_ptr__->b = 0.0;
    __return_storage_ptr__->a = 0.0;
    if (pOVar4 != (Object *)0x0) {
      if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lVar5 + 0x40)) {
        FUN_?(pOVar4,lVar5);
        pcVar6 = (code *)swi(3);
        pCVar7 = (Color *)(*pcVar6)();
        return pCVar7;
      }
      if (pOVar3 != (Object *)0x0) {
        pIVar8 = *(Il2CppClass **)(lVar5 + 0x40);
        if ((pOVar3->klass->_0).element_class != pIVar8) {
          FUN_?(pOVar3,lVar5);
          pcVar6 = (code *)swi(3);
          pCVar7 = (Color *)(*pcVar6)();
          return pCVar7;
        }
        if (pOVar2 != (Object *)0x0) {
          if ((pOVar2->klass->_0).element_class != pIVar8) {
            FUN_?(pOVar2,lVar5);
            pcVar6 = (code *)swi(3);
            pCVar7 = (Color *)(*pcVar6)();
            return pCVar7;
          }
          if (pOVar1 != (Object *)0x0) {
            if ((pOVar1->klass->_0).element_class == pIVar8) {
              __return_storage_ptr__->r = *(float *)&pOVar1[1].klass;
              __return_storage_ptr__->g = *(float *)&pOVar2[1].klass;
              __return_storage_ptr__->b = *(float *)&pOVar3[1].klass;
              __return_storage_ptr__->a = *(float *)&pOVar4[1].klass;
              return __return_storage_ptr__;
            }
            FUN_?(pOVar1,lVar5);
            pcVar6 = (code *)swi(3);
            pCVar7 = (Color *)(*pcVar6)();
            return pCVar7;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pCVar7 = (Color *)(*pcVar6)();
  return pCVar7;
}


/* RectTransform GetSettingsUIObject() */

RectTransform *
Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_GetSettingsUIObject
          (ColorAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Color>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ThemeAttributes__ColorAttribute__Setter_MethodInfo__UnityEngine__Object__Instantiate<ThemeAttributes::ColorAttribute::Setter>_ThemeAttributes__ColorAttribute__Setter_
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
                       ThemeAttributes__ColorAttribute__Setter_MethodInfo__UnityEngine__Object__Instantiate<ThemeAttributes::ColorAttribute::Setter>_ThemeAttributes__ColorAttribute__Setter_
                      );
  uVar1 = FUN_?(TypeInfo__System__Action<UnityEngine::Color>);
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


/* Void Initialize(SettingsWrapper, String, Int32, Action`1[UnityEngine.Color]) */

void Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_Initialize
               (ColorAttribute *this,SettingsWrapper *settings,String *key,int32_t groups,
               Action_1_UnityEngine_Color_ *onChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__ThemeAttributes__NamedThemeAttribute<UnityEngine::Color>__Initialize_ThemeSettings__SettingsWrapper__System__String__int__System__Action<UnityEngine::Color>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__Dictionary<System::Object,_System::Object>_MethodInfo__ThemeSettings__SettingsWrapper__GetValueForAttribute<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>_ThemeAttributes__ThemeAttribute_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  MethodInfo__ThemeAttributes__NamedThemeAttribute<UnityEngine::Color>__Initialize_ThemeSettings__SettingsWrapper__System__String__int__System__Action<UnityEngine::Color>_
  ;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this != (ColorAttribute *)0x0) {
    ThemeAttribute::ThemeAttribute_Initialize
              ((ThemeAttribute *)this,settings,key,groups,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields)._._.themeCallback = onChange;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields)._._.themeCallback >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
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
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,pMVar1->klass->rgctx_data[3].rgctxDataDummy,(MethodInfo *)0x0)
    ;
    TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
    if (settings != (SettingsWrapper *)0x0) {
      this_01 = (Dictionary_2_System_Object_System_Object_ *)
                ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_2
                          (settings,(ThemeAttribute *)this,
                           System__Collections__Generic__Dictionary<System::Object,_System::Object>_MethodInfo__ThemeSettings__SettingsWrapper__GetValueForAttribute<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>_ThemeAttributes__ThemeAttribute_
                          );
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Alpha);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Red);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Blue);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_Green);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)StringLiteral_Red,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pOVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)StringLiteral_Green,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)StringLiteral_Blue,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (this_01,(Object *)StringLiteral_Alpha,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
        if (pOVar11 != (Object *)0x0) {
          pIVar12 = *(Il2CppClass **)(lRam_? + 0x40);
          if ((pOVar11->klass->_0).element_class != pIVar12) {
            FUN_?(pOVar11);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if (pOVar10 != (Object *)0x0) {
            if ((pOVar10->klass->_0).element_class != pIVar12) {
              FUN_?(pOVar10);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            if (pOVar9 != (Object *)0x0) {
              if ((pOVar9->klass->_0).element_class != pIVar12) {
                FUN_?(pOVar9);
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              if (pOVar8 != (Object *)0x0) {
                if ((pOVar8->klass->_0).element_class != pIVar12) {
                  FUN_?(pOVar8);
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                fVar14 = *(float *)&pOVar8[1].klass;
                fVar15 = *(float *)&pOVar9[1].klass;
                fVar16 = *(float *)&pOVar10[1].klass;
                fVar17 = *(float *)&pOVar11[1].klass;
                if (fVar14 < 0.0) {
                  fVar14 = 0.0;
                }
                else if (_UNK_? < fVar14) {
                  fVar14 = _UNK_?;
                }
                if (fVar15 < 0.0) {
                  fVar15 = 0.0;
                }
                else if (_UNK_? < fVar15) {
                  fVar15 = _UNK_?;
                }
                if (fVar16 < 0.0) {
                  fVar16 = 0.0;
                }
                else if (_UNK_? < fVar16) {
                  fVar16 = _UNK_?;
                }
                if (fVar17 < 0.0) {
                  fVar17 = 0.0;
                }
                else if (_UNK_? < fVar17) {
                  fVar17 = _UNK_?;
                }
                (this->fields)._._.value.r = fVar14;
                (this->fields)._._.value.g = fVar15;
                (this->fields)._._.value.b = fVar16;
                (this->fields)._._.value.a = fVar17;
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnSettingsChanged(Color) */

void Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_OnSettingsChanged
               (ColorAttribute *this,Color *value,MethodInfo *method)

{
  CStack_1.r = value->r;
  CStack_1.g = value->g;
  CStack_1.b = value->b;
  CStack_1.a = value->a;
  key = (this->fields)._._._._Key_k__BackingField;
  (this->fields)._._.value.r = CStack_1.r;
  (this->fields)._._.value.g = CStack_1.g;
  (this->fields)._._.value.b = CStack_1.b;
  (this->fields)._._.value.a = CStack_1.a;
  value_00 = ColorAttribute_ToSerializable(this,&CStack_1,(MethodInfo *)0x0);
  ThemeAttribute::ThemeAttribute_UpdateSettings
            ((ThemeAttribute *)this,key,(Object *)value_00,(MethodInfo *)0x0);
  pAVar2 = (this->fields)._._.themeCallback;
  if (pAVar2 != (Action_1_UnityEngine_Color_ *)0x0) {
    CStack_1.r = (this->fields)._._.value.r;
    CStack_1.g = (this->fields)._._.value.g;
    CStack_1.b = (this->fields)._._.value.b;
    CStack_1.a = (this->fields)._._.value.a;
    (*(pAVar2->fields)._._.invoke_impl)
              ((pAVar2->fields)._._.method_code,&CStack_1,(pAVar2->fields)._._.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Dictionary`2[System.Object,System.Object] ToSerializable(Color) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_ToSerializable
          (ColorAttribute *this,Color *c,MethodInfo *method)

{
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
    FUN_?(&StringLiteral_Alpha);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Red);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Blue);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Green);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  afStackX_10[0] = c->r;
  pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    IVar2 = CONCAT31((int3)((uint)in_R9D >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_Red,
               pOVar1,IVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_10[0] = c->g;
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
    IVar2 = CONCAT31((int3)(IVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_Green,
               pOVar1,IVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_10[0] = c->b;
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
    IVar2 = CONCAT31((int3)(IVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_Blue,
               pOVar1,IVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    afStackX_10[0] = c->a;
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_Alpha,
               pOVar1,CONCAT31((int3)(IVar2 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    return (Dictionary_2_System_Object_System_Object_ *)this_00;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pDVar4 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar3)();
  return pDVar4;
}


/* ColorAttribute() */

void Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute__ctor
               (ColorAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__ThemeAttributes__NamedThemeAttribute<UnityEngine::Color>__NamedThemeAttribute__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return;
}


/* Object get_Data() */

Object * Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_get_Data
                   (ColorAttribute *this,MethodInfo *method)

{
  CStack_1.r = (this->fields)._._.value.r;
  CStack_1.g = (this->fields)._._.value.g;
  CStack_1.b = (this->fields)._._.value.b;
  CStack_1.a = (this->fields)._._.value.a;
  pDVar2 = ColorAttribute_ToSerializable(this,&CStack_1,(MethodInfo *)0x0);
  return (Object *)pDVar2;
}

