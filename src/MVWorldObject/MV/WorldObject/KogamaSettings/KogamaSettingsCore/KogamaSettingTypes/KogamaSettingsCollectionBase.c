
/* Void AddChild(KogamaSettingWrapperBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingsCollectionBase::KogamaSettingsCollectionBase_AddChild
               (KogamaSettingsCollectionBase *this,KogamaSettingWrapperBase *kogamaSetting,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Add_System__String__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((kogamaSetting != (KogamaSettingWrapperBase *)0x0) &&
     (this_00 = (this->fields).children,
     this_00 !=
     (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
      *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)(kogamaSetting->fields).key,(Object *)kogamaSetting,
               CONCAT31((int3)((uint)in_R9D >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Add_System__String__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingWrapperBase_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* KogamaSettingsCollectionBase CopyWithOutChildren(KogamaSettingsCollectionBase) */

KogamaSettingsCollectionBase *
MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
KogamaSettingsCollectionBase::KogamaSettingsCollectionBase_CopyWithOutChildren
          (KogamaSettingsCollectionBase *this,KogamaSettingsCollectionBase *parent,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  key = (this->fields)._.key;
  this_00 = (KogamaSettingsCollectionBase *)
            FUN_?(
                         TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingsCollectionBase
                         );
  KogamaSettingsCollectionBase__ctor(this_00,key,parent,(MethodInfo *)0x0);
  return this_00;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingsCollectionBase::KogamaSettingsCollectionBase_ToString
                   (KogamaSettingsCollectionBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._.key;
  args = (Object__Array *)
         System.Core.dll::System::Linq::Enumerable::Enumerable_Empty_2
                   (System__Object__MethodInfo__System__Array__Empty<System::Object>______);
  if (args != (Object__Array *)0x0) {
    PStack_2._arg0 = (Object *)0x0;
    PStack_2._arg1 = (Object *)0x0;
    PStack_2._arg2 = (Object *)0x0;
    PStack_2._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_2,args,(MethodInfo *)0x0);
    PStack_3._arg0 = PStack_2._arg0;
    PStack_3._arg1 = PStack_2._arg1;
    PStack_3._arg2 = PStack_2._arg2;
    PStack_3._args = PStack_2._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
    return pSVar1;
  }
  ppSVar4 = &StringLiteral_format;
  if (pSVar1 != (String *)0x0) {
    ppSVar4 = &StringLiteral_args;
  }
  pSVar1 = (String *)func_?(ppSVar4);
  uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar5);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,pSVar1,(MethodInfo *)0x0);
  uVar5 = func_?(&
                              MethodInfo__System__String__Format_MethodInfo__System__String__System__Object____
                             );
  FUN_?(this_00,uVar5);
  pcVar6 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar6)();
  return pSVar1;
}


/* KogamaSettingsCollectionBase(String, KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingsCollectionBase::KogamaSettingsCollectionBase__ctor
               (KogamaSettingsCollectionBase *this,String *key,
               KogamaSettingsCollectionBase *kogamaSettingsCollection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).children =
       (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
        *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).children >> 0xc);
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
  iVar6 = iRam_?;
  (this->fields)._._Parent_k__BackingField = kogamaSettingsCollection;
  if (iVar6 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar3 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar1 = uVar5 == *puVar3;
      if (bVar1) {
        *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar1);
  }
  (this->fields)._.key = key;
  if (iVar6 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.key >> 0xc);
    lVar7 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar3 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar1 = uVar5 == *puVar3;
      if (bVar1) {
        *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

