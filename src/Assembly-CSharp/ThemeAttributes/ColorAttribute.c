
/* Single Constrain(Single) */

float Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_Constrain
                (ColorAttribute *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                    (value,0.0,1.0,(MethodInfo *)0x0);
  return fVar1;
}


/* Color Constrain(Color) */

Color * Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_Constrain_1
                  (Color *__return_storage_ptr__,ColorAttribute *this,Color value,MethodInfo *method
                  )

{
  ColorAttribute_Constrain(this,value.r,(MethodInfo *)0x0);
  ColorAttribute_Constrain(this,value.g,(MethodInfo *)0x0);
  ColorAttribute_Constrain(this,value.b,(MethodInfo *)0x0);
  fVar1 = ColorAttribute_Constrain(this,value.a,(MethodInfo *)0x0);
  this->klass = (ColorAttribute__Class *)&UNK_?;
  this->monitor = (MonitorData *)this;
  (this->fields)._._._._Key_k__BackingField = (String *)value.a;
  (this->fields)._._._._Groups_k__BackingField = (int32_t)fVar1;
  return (Color *)this;
}


/* Color ConvertToColor(Dictionary`2[System.Object,System.Object]) */

Color * Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_ConvertToColor
                  (Color *__return_storage_ptr__,Dictionary_2_System_Object_System_Object_ *value,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (Pool *)0x0;
  if (value == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    pSStack2 = (Single__Class *)0x0;
    func_?();
    pSStack2 = extraout_EDX;
code_?:
    pPStack3 = unaff_EBX;
    func_?();
    pSStack2 = extraout_EDX_00;
code_?:
    pPStack3 = unaff_EDI;
    func_?();
    pSStack2 = extraout_EDX_01;
  }
  else {
    unaff_EBX = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)value,(Type *)StringLiteral_Red,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)value,(Type *)StringLiteral_Green,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)value,(Type *)StringLiteral_Blue,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pSStack2 =
         (Single__Class *)
         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
         Dictionary_2_System_Type_Pool__get_Item
                   ((Dictionary_2_System_Type_Pool_ *)value,(Type *)StringLiteral_Alpha,
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    __return_storage_ptr__->r = 0.0;
    __return_storage_ptr__->g = 0.0;
    __return_storage_ptr__->b = 0.0;
    __return_storage_ptr__->a = 0.0;
    if (pSStack2 == (Single__Class *)0x0) goto code_?;
    pSVar4 = TypeInfo__System__Single;
    if ((((Pool *)pSStack2)->klass->_0).element_class !=
        (TypeInfo__System__Single->_0).element_class) goto code_?;
    puVar5 = (undefined4 *)func_?();
    if (pPVar1 == (Pool *)0x0) goto code_?;
    pSStack2 = TypeInfo__System__Single;
    if ((pPVar1->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      pSStack2 = (Single__Class *)pPVar1;
      puVar6 = (undefined4 *)func_?();
      if (unaff_EDI == (Pool *)0x0) goto code_?;
      pSStack2 = TypeInfo__System__Single;
      if ((unaff_EDI->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
        pSStack2 = (Single__Class *)unaff_EDI;
        pPVar1 = (Pool *)func_?();
        if (unaff_EBX == (Pool *)0x0) goto code_?;
        pSStack2 = TypeInfo__System__Single;
        if ((unaff_EBX->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
          pSStack2 = (Single__Class *)unaff_EBX;
          func_?();
          pPStack3 = (Pool *)*puVar5;
          pSStack2 = (Single__Class *)0x0;
          puStack7 = (undefined *)*puVar6;
          func_?();
          return __return_storage_ptr__;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
  pPStack3 = pPVar1;
  func_?();
  pSVar4 = extraout_ECX;
  pSStack2 = (Single__Class *)extraout_EDX_02;
code_?:
  pPStack3 = (Pool *)pSStack2;
  pSStack2 = pSVar4;
  func_?();
  pcVar8 = (code *)swi(3);
  pCVar9 = (Color *)(*pcVar8)();
  return pCVar9;
}


/* RectTransform GetSettingsUIObject() */

RectTransform *
Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_GetSettingsUIObject
          (ColorAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).prefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      ThemeAttributes__ColorAttribute__Setter_MethodInfo__UnityEngine__Object__Instantiate<ThemeAttributes::ColorAttribute::Setter>_ThemeAttributes__ColorAttribute__Setter_
                     );
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(TypeInfo__System__Action<UnityEngine::Color>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,this->klass[1]._0.image,
             MethodInfo__System__Action<UnityEngine::Color>__Action_System__Object__void__);
  if (pXVar1 == (XpBoostParticlePreviewer *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    pRVar3 = (RectTransform *)(*pcVar2)();
    return pRVar3;
  }
  (*pXVar1->klass[1]._0.gc_desc)(pXVar1,this);
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)pXVar1,(MethodInfo *)0x0);
  pTVar5 = (Transform *)0x0;
  if (pTVar4 != (Transform *)0x0) {
    if (pTVar4->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
      pTVar5 = pTVar4;
    }
    if (pTVar5 == (Transform *)0x0) {
      func_?();
      goto code_?;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  NamedThemeAttribute`1[UnityEngine::Color]::NamedThemeAttribute_1_UnityEngine_Color__Initialize
            ((NamedThemeAttribute_1_UnityEngine_Color_ *)this,settings,key,groups,onChange,
             MethodInfo__ThemeAttributes__NamedThemeAttribute<UnityEngine::Color>__Initialize_ThemeSettings__SettingsWrapper__System__String__int__System__Action<UnityEngine::Color>_
            );
  if (settings != (SettingsWrapper *)0x0) {
    value = ThemeSettings::SettingsWrapper::SettingsWrapper_GetValueForAttribute_2
                      (settings,(ThemeAttribute *)this,
                       System__Collections__Generic__Dictionary<System::Object,_System::Object>_MethodInfo__ThemeSettings__SettingsWrapper__GetValueForAttribute<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>_ThemeAttributes__ThemeAttribute_
                      );
    pCVar1 = ColorAttribute_ConvertToColor((Color *)&puStack_2,value,(MethodInfo *)0x0);
    puStack_2 = (undefined *)pCVar1->r;
    fVar3 = pCVar1->g;
    fVar4 = pCVar1->b;
    fVar5 = pCVar1->a;
    puStack_2 = (undefined *)ColorAttribute_Constrain(this,(float)puStack_2,(MethodInfo *)0x0);
    fVar3 = ColorAttribute_Constrain(this,fVar3,(MethodInfo *)0x0);
    fVar4 = ColorAttribute_Constrain(this,fVar4,(MethodInfo *)0x0);
    fVar5 = ColorAttribute_Constrain(this,fVar5,(MethodInfo *)0x0);
    (this->fields)._._.value.r = (float)puStack_2;
    (this->fields)._._.value.g = fVar3;
    (this->fields)._._.value.b = fVar4;
    (this->fields)._._.value.a = fVar5;
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnSettingsChanged(Color) */

void Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_OnSettingsChanged
               (ColorAttribute *this,Color value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key = (this->fields)._._._._Key_k__BackingField;
  (this->fields)._._.value.r = value.r;
  (this->fields)._._.value.g = value.g;
  (this->fields)._._.value.b = value.b;
  (this->fields)._._.value.a = value.a;
  value_00 = ColorAttribute_ToSerializable(this,value,(MethodInfo *)0x0);
  pDVar1 = _UNK_?;
  pSVar2 = (this->fields)._._._.themeSettings;
  if (pSVar2 != (SettingsWrapper *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
      value_00 = pDVar1;
    }
    pDVar1 = (pSVar2->fields).settingsData;
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)pDVar1,key,(Theme *)value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      this_00 = (Action_1_UnityEngine_Vector4_ *)(this->fields)._._.themeCallback;
      if (this_00 != (Action_1_UnityEngine_Vector4_ *)0x0) {
        mscorlib.dll::System::Action`1[UnityEngine::Vector4]::Action_1_UnityEngine_Vector4__Invoke
                  (this_00,(Vector4)(this->fields)._._.value,
                   MethodInfo__System__Action<UnityEngine::Color>__Invoke_UnityEngine__Color_);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Dictionary`2[System.Object,System.Object] ToSerializable(Color) */

Dictionary_2_System_Object_System_Object_ *
Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_ToSerializable
          (ColorAttribute *this,Color c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  fStack_2 = c.r;
  pCVar3 = (CrossPlatformInputManager_VirtualButton *)
           func_?(TypeInfo__System__Single,&fStack_2);
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,StringLiteral_Red,pCVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    fStack_4 = c.g;
    pCVar3 = (CrossPlatformInputManager_VirtualButton *)func_?(TypeInfo__System__Single);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,StringLiteral_Green,pCVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    fStack_5 = c.b;
    pCVar3 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Single,&fStack_5);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,StringLiteral_Blue,pCVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    puStack6 = &stack0xffffffec;
    pCVar3 = (CrossPlatformInputManager_VirtualButton *)func_?();
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)pDVar1,StringLiteral_Alpha,pCVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    return pDVar1;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar7)();
  return pDVar1;
}


/* ColorAttribute() */

void Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute__ctor
               (ColorAttribute *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  System.Core.dll::System::Linq::OrderedEnumerable`1[System::Collections::Generic::
  KeyValuePair`2[System::Int32,System::Int32]]::
  OrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32__System_Collections_IEnumerable_GetEnumerator
            ((OrderedEnumerable_1_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_
              *)this,
             MethodInfo__ThemeAttributes__NamedThemeAttribute<UnityEngine::Color>__NamedThemeAttribute__
            );
  return;
}


/* Object get_Data() */

Object * Assembly-CSharp.dll::ThemeAttributes::ColorAttribute::ColorAttribute_get_Data
                   (ColorAttribute *this,MethodInfo *method)

{
  pDVar1 = ColorAttribute_ToSerializable(this,(this->fields)._._.value,(MethodInfo *)0x0);
  return (Object *)pDVar1;
}

