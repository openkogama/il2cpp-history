
/* ObjectTransparencyData() */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::ObjectTransparencyData::
     ObjectTransparencyData__cctor(MethodInfo *method)

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
    FUN_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
          *)FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if (*(int *)&(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  auStackX_10[0] = CONCAT31(auStackX_10[0]._1_3_,1);
  pSVar1 = TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
           static_fields->ShowOutline;
  pOVar2 = (Object *)FUN_?(uRam_?,auStackX_10);
  if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar1,pOVar2,
             (InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  auStackX_10[0] = 0x3f666666;
  pSVar1 = TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
           static_fields->Alpha;
  pOVar2 = (Object *)FUN_?(uRam_?,auStackX_10);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar1,pOVar2,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData->static_fields->
  DefaultValues = (Dictionary_2_System_Object_System_Object_ *)this;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)
                   TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData->
                   static_fields >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  return;
}

