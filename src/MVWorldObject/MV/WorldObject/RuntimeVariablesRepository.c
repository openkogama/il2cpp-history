
/* Dictionary`2[System.Object,System.Object] AdvancedGhostRuntimeData() */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
RuntimeVariablesRepository_AdvancedGhostRuntimeData(MethodInfo *method)

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
    FUN_?(&StringLiteral_modifiers);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_shield);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_health);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_deathTime);
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
  uStackX_10 = 0x42a00000;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_10);
  if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
    return pDVar3;
  }
  uVar4 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_health,pOVar1
             ,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_10 = 0;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_10);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_shield,pOVar1
             ,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
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
  uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_modifiers,
             (Object *)this_00,(InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  lVar6 = lRam_?;
  pOVar1 = (Object *)0x0;
  uStackX_10 = 0;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar1 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar1 + 1,&uStackX_10,(longlong)*(int *)(lVar6 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        uVar5 = (ulonglong)(uVar7 & 0x3f);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << uVar5;
          }
          UNLOCK();
        } while (!bVar11);
      }
    }
  }
  else {
    pOVar1 = (Object *)((ulonglong)uStackX_14 << 0x20);
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_deathTime,
             pOVar1,(InsertionBehavior__Enum)CONCAT71((int7)(uVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  return (Dictionary_2_System_Object_System_Object_ *)this;
}


/* Dictionary`2[System.Object,System.Object] AvatarRuntimeData() */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
RuntimeVariablesRepository_AvatarRuntimeData(MethodInfo *method)

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
    FUN_?(&StringLiteral_modifiers);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_seat);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pointRotationPitch);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_headRotationYaw);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_headRotationPitch);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_lineOfFire);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_size);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_timeStamp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_maxHealth);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isFiring);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_currentItem);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_emote);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_shield);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pointRotationYaw);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_hasHandEquippableItem);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_health);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_spawnRoleModeType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_state);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_animation);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_invulnerable);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_type);
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
  uStackX_10 = 0x42c80000;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_10);
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_health,
               pOVar1,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 100;
    pOVar1 = (Object *)FUN_?(lRam_?,&uStackX_10);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_maxHealth,
               pOVar1,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uStackX_10 = 0;
    pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_10);
    uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_shield,
               pOVar1,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    uVar4 = uStackX_10;
    lVar5 = lRam_?;
    pOVar1 = (Object *)0x0;
    uStackX_10 = uStackX_10 & 0xffffff00;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         (pOVar6 = pOVar1, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar6 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar6 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
          uVar7 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
          uVar3 = (ulonglong)(uVar4 & 0x3f);
          do {
            uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
            puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << uVar3;
            }
            UNLOCK();
          } while (!bVar10);
        }
      }
    }
    else {
      pOVar6 = (Object *)(CONCAT44(uStackX_14,uVar4) & 0xffffffffffffff00);
    }
    uVar2 = CONCAT71((int7)(uVar3 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_isFiring,
               pOVar6,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    pDVar11 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
              *)FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (pDVar11,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_modifiers,
               (Object *)pDVar11,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    pDVar11 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
              *)FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (pDVar11,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    uStackX_10 = 5;
    pOVar6 = (Object *)FUN_?(lRam_?,&uStackX_10);
    if (pDVar11 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)0x0) {
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar11,(Object *)StringLiteral_type,
                 pOVar6,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,
                 (Object *)StringLiteral_currentItem,(Object *)pDVar11,
                 (InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pDVar11 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                *)FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,
                 (Object *)StringLiteral_lineOfFire,(Object *)pDVar11,(InsertionBehavior__Enum)uVar3
                 ,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ->klass->rgctx_data[0x22].method);
      uVar4 = uStackX_10;
      lVar5 = lRam_?;
      uStackX_10 = uStackX_10 & 0xffffff00;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           (pOVar6 = pOVar1, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar6 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar6 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar4 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
            uVar7 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
            uVar3 = (ulonglong)(uVar4 & 0x3f);
            do {
              uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
              puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << uVar3;
              }
              UNLOCK();
            } while (!bVar10);
          }
        }
      }
      else {
        pOVar6 = (Object *)(CONCAT44(uStackX_14,uVar4) & 0xffffffffffffff00);
      }
      uVar2 = CONCAT71((int7)(uVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,
                 (Object *)StringLiteral_invulnerable,pOVar6,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0xffffffff;
      pOVar6 = (Object *)FUN_?(lRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_seat,
                 pOVar6,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 4;
      pOVar6 = (Object *)FUN_?(lRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,
                 (Object *)StringLiteral_spawnRoleModeType,pOVar6,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0;
      pOVar6 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,
                 (Object *)StringLiteral_headRotationYaw,pOVar6,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0;
      pOVar6 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,
                 (Object *)StringLiteral_headRotationPitch,pOVar6,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0;
      pOVar6 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,
                 (Object *)StringLiteral_pointRotationYaw,pOVar6,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0;
      pOVar6 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,
                 (Object *)StringLiteral_pointRotationPitch,pOVar6,(InsertionBehavior__Enum)uVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar4 = uStackX_10;
      lVar5 = lRam_?;
      uStackX_10 = uStackX_10 & 0xffffff00;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           (pOVar6 = pOVar1, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar6 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar6 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar4 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
            uVar7 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
            uVar3 = (ulonglong)(uVar4 & 0x3f);
            do {
              uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
              puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << uVar3;
              }
              UNLOCK();
            } while (!bVar10);
          }
        }
      }
      else {
        pOVar6 = (Object *)(CONCAT44(uStackX_14,uVar4) & 0xffffffffffffff00);
      }
      uVar2 = CONCAT71((int7)(uVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,
                 (Object *)StringLiteral_hasHandEquippableItem,pOVar6,
                 (InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0x3f800000;
      pOVar6 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_size,
                 pOVar6,(InsertionBehavior__Enum)uVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      lVar5 = lRam_?;
      uStackX_10 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           (pOVar6 = pOVar1, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar6 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar6 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar4 = (uint)((ulonglong)(pOVar6 + 1) >> 0xc);
            uVar7 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
            uVar3 = (ulonglong)(uVar4 & 0x3f);
            do {
              uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
              puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << uVar3;
              }
              UNLOCK();
            } while (!bVar10);
          }
        }
      }
      else {
        pOVar6 = (Object *)((ulonglong)uStackX_14 << 0x20);
      }
      uVar2 = CONCAT71((int7)(uVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_emote,
                 pOVar6,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pDVar11 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                *)FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar11,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (pDVar11 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)0x0) {
        uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar11,(Object *)StringLiteral_state
                   ,(Object *)StringLiteral_Idle,(InsertionBehavior__Enum)uVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        lVar5 = lRam_?;
        uStackX_10 = 0;
        if (*(int *)(lRam_? + 0x28) < 0) {
          if ((*(longlong *)(lRam_? + 0x60) == 0) ||
             ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
            pOVar1 = (Object *)FUN_?(lRam_?);
            FUN_?(pOVar1 + 1,&uStackX_10,(longlong)*(int *)(lVar5 + 0xf8) + -0x10);
            if (iRam_? != 0) {
              uVar4 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
              uVar7 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
              uVar3 = (ulonglong)(uVar4 & 0x3f);
              do {
                uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
                puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
                LOCK();
                bVar10 = uVar8 == *puVar9;
                if (bVar10) {
                  *puVar9 = uVar8 | 1L << uVar3;
                }
                UNLOCK();
              } while (!bVar10);
            }
          }
        }
        else {
          pOVar1 = (Object *)((ulonglong)uStackX_14 << 0x20);
        }
        uVar2 = CONCAT71((int7)(uVar3 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar11,
                   (Object *)StringLiteral_timeStamp,pOVar1,(InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this,
                   (Object *)StringLiteral_animation,(Object *)pDVar11,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        return (Dictionary_2_System_Object_System_Object_ *)this;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  pDVar13 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar12)();
  return pDVar13;
}


/* Dictionary`2[System.Object,System.Object] BuildModeAvatarRuntimeData() */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
RuntimeVariablesRepository_BuildModeAvatarRuntimeData(MethodInfo *method)

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
    FUN_?(&StringLiteral_pointRotationPitch);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_headRotationYaw);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_headRotationPitch);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_timeStamp);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_currentItem);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_emote);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_pointRotationYaw);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_hasHandEquippableItem);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_state);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_animation);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_type);
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
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStackX_10 = 5;
  pOVar2 = (Object *)FUN_?(lRam_?,&uStackX_10);
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
    uVar3 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_type,
               pOVar2,(InsertionBehavior__Enum)uVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
      uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,
                 (Object *)StringLiteral_currentItem,(Object *)pDVar1,
                 (InsertionBehavior__Enum)uVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0;
      pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,
                 (Object *)StringLiteral_headRotationYaw,pOVar2,(InsertionBehavior__Enum)uVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0;
      pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,
                 (Object *)StringLiteral_headRotationPitch,pOVar2,(InsertionBehavior__Enum)uVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0;
      pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,
                 (Object *)StringLiteral_pointRotationYaw,pOVar2,(InsertionBehavior__Enum)uVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uStackX_10 = 0;
      pOVar2 = (Object *)FUN_?(uRam_?,&uStackX_10);
      uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,
                 (Object *)StringLiteral_pointRotationPitch,pOVar2,(InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar5 = uStackX_10;
      lVar6 = lRam_?;
      pOVar2 = (Object *)0x0;
      uStackX_10 = uStackX_10 & 0xffffff00;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           (pOVar7 = pOVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar7 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar7 + 1,&uStackX_10,(longlong)*(int *)(lVar6 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)(pOVar7 + 1) >> 0xc);
            uVar8 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
            uVar4 = (ulonglong)(uVar5 & 0x3f);
            do {
              uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
              puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
              LOCK();
              bVar11 = uVar9 == *puVar10;
              if (bVar11) {
                *puVar10 = uVar9 | 1L << uVar4;
              }
              UNLOCK();
            } while (!bVar11);
          }
        }
      }
      else {
        pOVar7 = (Object *)(CONCAT44(uStackX_14,uVar5) & 0xffffffffffffff00);
      }
      uVar4 = CONCAT71((int7)(uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,
                 (Object *)StringLiteral_hasHandEquippableItem,pOVar7,
                 (InsertionBehavior__Enum)uVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      lVar6 = lRam_?;
      uStackX_10 = 0;
      if (*(int *)(lRam_? + 0x28) < 0) {
        if ((*(longlong *)(lRam_? + 0x60) == 0) ||
           (pOVar7 = pOVar2, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
          pOVar7 = (Object *)FUN_?(lRam_?);
          FUN_?(pOVar7 + 1,&uStackX_10,(longlong)*(int *)(lVar6 + 0xf8) + -0x10);
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)(pOVar7 + 1) >> 0xc);
            uVar8 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
            uVar4 = (ulonglong)(uVar5 & 0x3f);
            do {
              uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
              puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
              LOCK();
              bVar11 = uVar9 == *puVar10;
              if (bVar11) {
                *puVar10 = uVar9 | 1L << uVar4;
              }
              UNLOCK();
            } while (!bVar11);
          }
        }
      }
      else {
        pOVar7 = (Object *)((ulonglong)uStackX_14 << 0x20);
      }
      uVar3 = CONCAT71((int7)(uVar4 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_emote,
                 pOVar7,(InsertionBehavior__Enum)uVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                *)FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)0x0) {
        uVar4 = CONCAT71((int7)((ulonglong)uVar3 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,(Object *)StringLiteral_state
                   ,(Object *)StringLiteral_Idle,(InsertionBehavior__Enum)uVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        lVar6 = lRam_?;
        uStackX_10 = 0;
        if (*(int *)(lRam_? + 0x28) < 0) {
          if ((*(longlong *)(lRam_? + 0x60) == 0) ||
             ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
            pOVar2 = (Object *)FUN_?(lRam_?);
            FUN_?(pOVar2 + 1,&uStackX_10,(longlong)*(int *)(lVar6 + 0xf8) + -0x10);
            if (iRam_? != 0) {
              uVar5 = (uint)((ulonglong)(pOVar2 + 1) >> 0xc);
              uVar8 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
              uVar4 = (ulonglong)(uVar5 & 0x3f);
              do {
                uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
                puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
                LOCK();
                bVar11 = uVar9 == *puVar10;
                if (bVar11) {
                  *puVar10 = uVar9 | 1L << uVar4;
                }
                UNLOCK();
              } while (!bVar11);
            }
          }
        }
        else {
          pOVar2 = (Object *)((ulonglong)uStackX_14 << 0x20);
        }
        uVar3 = CONCAT71((int7)(uVar4 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar1,
                   (Object *)StringLiteral_timeStamp,pOVar2,(InsertionBehavior__Enum)uVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)this,
                   (Object *)StringLiteral_animation,(Object *)pDVar1,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        return (Dictionary_2_System_Object_System_Object_ *)this;
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  pDVar13 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar12)();
  return pDVar13;
}


/* Dictionary`2[System.Object,System.Object] CollectibleRuntimeData() */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
RuntimeVariablesRepository_CollectibleRuntimeData(MethodInfo *method)

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
    FUN_?(&StringLiteral_takenByList);
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
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_takenByList
               ,(Object *)this_00,CONCAT31((int3)((uint)in_R9D >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    return (Dictionary_2_System_Object_System_Object_ *)this;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar1)();
  return pDVar2;
}


/* Dictionary`2[System.Object,System.Object] GetRuntimeVariables(WorldObjectType) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
RuntimeVariablesRepository_GetRuntimeVariables
          (WorldObjectType__Enum worldObjectType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__get_Item_MV__WorldObject__WorldObjectType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
  }
  this = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
         TypeInfo__MV__WorldObject__RuntimeVariablesRepository->static_fields->runtimeVariables;
  if (this != (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
            Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                      (this,worldObjectType,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__ContainsKey_MV__WorldObject__WorldObjectType_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      return (Dictionary_2_System_Object_System_Object_ *)pDVar2;
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    }
    this_00 = TypeInfo__MV__WorldObject__RuntimeVariablesRepository->static_fields->runtimeVariables
    ;
    if (this_00 !=
        (Dictionary_2_MV_WorldObject_WorldObjectType_Dictionary_2_System_Object_System_Object_ *)0x0
       ) {
      pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,worldObjectType,
                           MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__get_Item_MV__WorldObject__WorldObjectType_
                          );
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      ,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      value = (Single__Array__Class *)0x0;
      if (cRam_? == '\0') {
        FUN_?(&TypeRef__System__Byte);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Byte);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeRef__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeRef__System__Int32);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Int32);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeRef__System__Single);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Single);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        FUN_?();
code_?:
        func_?(&
                            MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                           );
        pOVar4 = (Object *)func_?(&pOStack_5);
        FUN_?(pOVar4);
        pTVar6 = mscorlib.dll::System::Object::Object_GetType(pOVar4,(MethodInfo *)0x0);
        str0 = (String *)func_?(&StringLiteral_Type_not_handled_in_deepcopy_has);
        if (pTVar6 != (Type *)0x0) {
          FUN_?(pTVar6);
          unaff_R15 = (Int32__Array__Class *)func_?(3,pTVar6);
        }
        pIVar7 = (Int32__Array__Class *)
                  mscorlib.dll::System::String::String_Concat_4
                            (str0,(String *)unaff_R15,(MethodInfo *)0x0);
        uVar8 = func_?(&TypeInfo__System__ArgumentException);
        pIVar9 = (Int32__Array__Class *)func_?(uVar8);
        value = (Single__Array__Class *)0x0;
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1
                  ((InvalidEnumArgumentException *)pIVar9,(String *)pIVar7,(MethodInfo *)0x0);
        uVar8 = func_?(&
                                     MethodInfo__MV__WorldObject__HashtableFunctions__DeepCopyHashTable_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                                    );
        FUN_?(pIVar9,uVar8);
code_?:
        FUN_?();
code_?:
        pIVar10 = pIVar7;
        FUN_?(value);
code_?:
        FUN_?();
code_?:
        FUN_?(pIVar10,unaff_RSI);
code_?:
        FUN_?(pIVar9,unaff_RSI);
code_?:
        uVar8 = FUN_?(pIVar10,pIVar9);
        pBVar11 = (Byte__Array__Class *)pIVar9;
code_?:
        FUN_?(uVar8,pBVar11);
        pIVar9 = (Int32__Array__Class *)pBVar11;
code_?:
        FUN_?();
code_?:
        FUN_?(pIVar10,unaff_RSI);
code_?:
        FUN_?(pIVar9,unaff_RSI);
code_?:
        uVar8 = FUN_?(pIVar10,pIVar9);
        pIVar12 = pIVar9;
code_?:
        FUN_?(uVar8,pIVar12);
        value = (Single__Array__Class *)pIVar12;
        pIVar7 = pIVar10;
code_?:
        FUN_?();
code_?:
        FUN_?();
        pIVar10 = pIVar7;
code_?:
        FUN_?(pIVar10,unaff_RSI);
code_?:
        FUN_?(value,unaff_RSI);
code_?:
        uVar8 = FUN_?(pIVar10,value);
        pSVar13 = value;
code_?:
        FUN_?(uVar8,pSVar13);
code_?:
        FUN_?();
        FUN_?();
        pcVar14 = (code *)swi(3);
        pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar14)();
        return pDVar3;
      }
      uStack_15 = 0;
      uStack_16 = 0;
      if (iRam_? != 0) {
        uVar17 = (uint)((ulonglong)&pDStack_18 >> 0xc);
        puVar19 = (ulonglong *)((ulonglong)((uVar17 & 0x1fffff) >> 6) * 8 + 0xADDR);
        value = (Single__Array__Class *)(ulonglong)(uVar17 & 0x3f);
        do {
          uVar20 = *puVar19;
          LOCK();
          uVar21 = *puVar19;
          if (uVar20 == uVar21) {
            *puVar19 = uVar20 | 1L << (longlong)value;
          }
          UNLOCK();
        } while (uVar20 != uVar21);
      }
      unaff_R15 = (Int32__Array__Class *)0x0;
      uStack_22 = (ulonglong)(uint)(pDVar3->fields)._version;
      uStack_23 = 2;
      DStack_24._version = (undefined4)uStack_22;
      DStack_24._index = uStack_22._4_4_;
      DStack_24._current.key = (Object *)0x0;
      DStack_24._current.value = (Object *)0x0;
      DStack_24._getEnumeratorRetType = 2;
      DStack_24._36_4_ = 0;
      pDStack_18 = pDVar3;
      DStack_24._dictionary = pDVar3;
code_?:
      bVar25 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_24,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      pIVar10 = (Int32__Array__Class *)DStack_24._current.value;
      pOVar4 = DStack_24._current.key;
      if (bVar25 == 0) {
        return (Dictionary_2_System_Object_System_Object_ *)pDVar2;
      }
      pOStack_5 = DStack_24._current.key;
      pIStack_26 = (Int32__Array__Class *)DStack_24._current.value;
      if ((Int32__Array__Class *)DStack_24._current.value == (Int32__Array__Class *)0x0)
      goto code_?;
      pIVar7 = (Int32__Array__Class *)
                FUN_?((longlong)((_union_86 *)&(DStack_24._current.value)->klass)->dummy +
                              0x20);
      pIVar27 = TypeRef__System__Single;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pIVar12 = unaff_R15;
      if (pIVar27 != (Il2CppType *)0x0) {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        lVar28 = FUN_?(pIVar27);
        pIVar12 = (Int32__Array__Class *)FUN_?(lVar28 + 0x20);
      }
      pSVar13 = TypeInfo__System__Single;
      pIVar27 = TypeRef__System__Int32;
      if (pIVar7 == pIVar12) {
        value = TypeInfo__System__Single;
        pIVar7 = pIVar10;
        if (pIVar10 == (Int32__Array__Class *)0x0) goto code_?;
        lVar28 = FUN_?(pIVar10,TypeInfo__System__Single);
        value = TypeInfo__System__Single;
        uVar8 = extraout_XMM0_Qa_01;
        if (lVar28 == 0) goto code_?;
        lVar28 = FUN_?(pIVar10,TypeInfo__System__Single);
        if (lVar28 == 0) goto code_?;
        iVar1 = *(int32_t *)(lVar28 + 0x18);
        value = (Single__Array__Class *)FUN_?(TypeInfo__System__Single,iVar1);
        unaff_RSI = (Int32__Array__Class *)TypeInfo__System__Single;
        pIVar7 = unaff_R15;
        if ((value != (Single__Array__Class *)0x0) &&
           (pIVar7 = (Int32__Array__Class *)FUN_?(value,TypeInfo__System__Single),
           pIVar7 == (Int32__Array__Class *)0x0)) goto code_?;
        unaff_RSI = (Int32__Array__Class *)TypeInfo__System__Single;
        pAVar29 = (Array *)FUN_?(pIVar10,TypeInfo__System__Single);
        if (pAVar29 == (Array *)0x0) goto code_?;
        in_R9 = (void *)0x0;
        mscorlib.dll::System::Array::Array_Copy_2(pAVar29,(Array *)pIVar7,iVar1,(MethodInfo *)0x0);
        pIVar7 = pIVar10;
      }
      else {
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        pIVar9 = (Int32__Array__Class *)
                  mscorlib.dll::System::Type::Type_GetTypeFromHandle
                            ((RuntimeTypeHandle)pIVar27,(MethodInfo *)0x0);
        pIVar12 = TypeInfo__System__Int32;
        pIVar27 = TypeRef__System__Byte;
        pIVar30 = unaff_R15;
        if (pIVar7 == pIVar9) {
          pIVar9 = TypeInfo__System__Int32;
          if (pIVar10 == (Int32__Array__Class *)0x0) goto code_?;
          lVar28 = FUN_?(pIVar10,TypeInfo__System__Int32);
          pIVar9 = TypeInfo__System__Int32;
          uVar8 = extraout_XMM0_Qa_00;
          if (lVar28 == 0) goto code_?;
          lVar28 = FUN_?(pIVar10,TypeInfo__System__Int32);
          if (lVar28 == 0) goto code_?;
          iVar1 = *(int32_t *)(lVar28 + 0x18);
          pIVar9 = (Int32__Array__Class *)FUN_?(TypeInfo__System__Int32,iVar1);
          unaff_RSI = TypeInfo__System__Int32;
          if ((pIVar9 != (Int32__Array__Class *)0x0) &&
             (pIVar30 = (Int32__Array__Class *)FUN_?(pIVar9,TypeInfo__System__Int32),
             pIVar30 == (Int32__Array__Class *)0x0)) goto code_?;
          unaff_RSI = TypeInfo__System__Int32;
          pAVar29 = (Array *)FUN_?(pIVar10,TypeInfo__System__Int32);
          if (pAVar29 == (Array *)0x0) goto code_?;
        }
        else {
          if (*(int *)(lRam_? + 0xe4) == 0) {
            FUN_?();
          }
          pIVar12 = (Int32__Array__Class *)
                    mscorlib.dll::System::Type::Type_GetTypeFromHandle
                              ((RuntimeTypeHandle)pIVar27,(MethodInfo *)0x0);
          pBVar11 = TypeInfo__System__Byte;
          pIVar9 = (Int32__Array__Class *)
                    TypeRef__System__Collections__Generic__Dictionary<System::Object,_System::Object>
          ;
          if (pIVar7 != pIVar12) {
            if (*(int *)(lRam_? + 0xe4) == 0) {
              FUN_?();
            }
            pIVar12 = (Int32__Array__Class *)
                      mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                ((RuntimeTypeHandle)pIVar9,(MethodInfo *)0x0);
            if (pIVar7 == pIVar12) {
              pIVar12 = unaff_R15;
              if (pIVar10 != (Int32__Array__Class *)0x0) {
                in_R9 = ((_union_86 *)&((Object *)pIVar10)->klass)->dummy;
                bVar31 = (
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).naturalAligment;
                value = (Single__Array__Class *)pIVar10;
                if (((*(byte *)((longlong)in_R9 + 0x130) < bVar31) ||
                    (*(Dictionary_2_System_Object_System_Object___Class **)
                      (*(longlong *)((longlong)in_R9 + 200) + -8 + (ulonglong)bVar31 * 8) !=
                     TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                    )) || (pIVar12 = pIVar10, pIVar10 == (Int32__Array__Class *)0x0))
                goto code_?;
              }
              value = (Single__Array__Class *)
                      HashtableFunctions::HashtableFunctions_DeepCopyHashTable_1
                                ((Dictionary_2_System_Object_System_Object_ *)pIVar12,
                                 (MethodInfo *)0x0);
              goto code_?;
            }
            if (pIVar7 == (Int32__Array__Class *)0x0) goto code_?;
            cVar32 = (**(code **)((longlong)((_union_86 *)&pIVar7->_0)->dummy + 0x5c8))(pIVar7);
            lVar28 = lRam_?;
            value = (Single__Array__Class *)pIVar10;
            if (cVar32 == '\0') {
              if (*(int *)(lRam_? + 0xe4) == 0) {
                FUN_?();
              }
              pIVar12 = (Int32__Array__Class *)
                        mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                  ((void *)(lVar28 + 0x20),(MethodInfo *)0x0);
              if (pIVar7 != pIVar12) goto code_?;
            }
            goto code_?;
          }
          pIVar9 = (Int32__Array__Class *)TypeInfo__System__Byte;
          if (pIVar10 == (Int32__Array__Class *)0x0) goto code_?;
          lVar28 = FUN_?(pIVar10,TypeInfo__System__Byte);
          pIVar9 = (Int32__Array__Class *)TypeInfo__System__Byte;
          uVar8 = extraout_XMM0_Qa;
          if (lVar28 == 0) goto code_?;
          lVar28 = FUN_?(pIVar10,TypeInfo__System__Byte);
          if (lVar28 == 0) goto code_?;
          iVar1 = *(int32_t *)(lVar28 + 0x18);
          pIVar9 = (Int32__Array__Class *)FUN_?(TypeInfo__System__Byte,iVar1);
          unaff_RSI = (Int32__Array__Class *)TypeInfo__System__Byte;
          if ((pIVar9 != (Int32__Array__Class *)0x0) &&
             (pIVar30 = (Int32__Array__Class *)FUN_?(pIVar9,TypeInfo__System__Byte),
             pIVar30 == (Int32__Array__Class *)0x0)) goto code_?;
          unaff_RSI = (Int32__Array__Class *)TypeInfo__System__Byte;
          pAVar29 = (Array *)FUN_?(pIVar10,TypeInfo__System__Byte);
          if (pAVar29 == (Array *)0x0) goto code_?;
        }
        in_R9 = (void *)0x0;
        mscorlib.dll::System::Array::Array_Copy_2(pAVar29,(Array *)pIVar30,iVar1,(MethodInfo *)0x0);
        value = (Single__Array__Class *)pIVar9;
        pIVar7 = pIVar10;
      }
code_?:
      if (pDVar2 ==
          (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
           *)0x0) goto code_?;
      in_R9 = (void *)CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar2,pOVar4,(Object *)value,
                 (InsertionBehavior__Enum)in_R9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      goto code_?;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar14)();
  return pDVar3;
}


/* Dictionary`2[System.Object,System.Object] HamsterWheelRuntimeData() */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
RuntimeVariablesRepository_HamsterWheelRuntimeData(MethodInfo *method)

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
    FUN_?(&StringLiteral_modifiers);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isMovingForward);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isFiring);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_currentItem);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isMovingBackwards);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_shield);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_health);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isDead);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isGrounded);
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
  uStackX_10 = 0x43160000;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_10);
  if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
    return pDVar3;
  }
  uVar4 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_health,pOVar1
             ,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_10 = 0;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_10);
  uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_shield,pOVar1
             ,(InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar6 = uStackX_10;
  lVar7 = lRam_?;
  pOVar1 = (Object *)0x0;
  uStackX_10 = uStackX_10 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (pOVar8 = pOVar1, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar8 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar8 + 1,&uStackX_10,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
        uVar9 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        uVar5 = (ulonglong)(uVar6 & 0x3f);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << uVar5;
          }
          UNLOCK();
        } while (!bVar12);
      }
    }
  }
  else {
    pOVar8 = (Object *)(CONCAT44(uStackX_14,uVar6) & 0xffffffffffffff00);
  }
  uVar4 = CONCAT71((int7)(uVar5 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_isFiring,
             pOVar8,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  pDVar13 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (pDVar13,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_modifiers,
             (Object *)pDVar13,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  pDVar13 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (pDVar13,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_currentItem,
             (Object *)pDVar13,(InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar6 = uStackX_10;
  lVar7 = lRam_?;
  uStackX_10 = uStackX_10 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (pOVar8 = pOVar1, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar8 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar8 + 1,&uStackX_10,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
        uVar9 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        uVar5 = (ulonglong)(uVar6 & 0x3f);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << uVar5;
          }
          UNLOCK();
        } while (!bVar12);
      }
    }
  }
  else {
    pOVar8 = (Object *)(CONCAT44(uStackX_14,uVar6) & 0xffffffffffffff00);
  }
  uVar5 = CONCAT71((int7)(uVar5 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_isDead,pOVar8
             ,(InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar6 = uStackX_10;
  lVar7 = lRam_?;
  uStackX_10 = uStackX_10 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (pOVar8 = pOVar1, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar8 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar8 + 1,&uStackX_10,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
        uVar9 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        uVar5 = (ulonglong)(uVar6 & 0x3f);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << uVar5;
          }
          UNLOCK();
        } while (!bVar12);
      }
    }
  }
  else {
    pOVar8 = (Object *)(CONCAT44(uStackX_14,uVar6) & 0xffffffffffffff00);
  }
  uVar5 = CONCAT71((int7)(uVar5 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,
             (Object *)StringLiteral_isMovingForward,pOVar8,(InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar6 = uStackX_10;
  lVar7 = lRam_?;
  uStackX_10 = uStackX_10 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (pOVar8 = pOVar1, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar8 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar8 + 1,&uStackX_10,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(pOVar8 + 1) >> 0xc);
        uVar9 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        uVar5 = (ulonglong)(uVar6 & 0x3f);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << uVar5;
          }
          UNLOCK();
        } while (!bVar12);
      }
    }
  }
  else {
    pOVar8 = (Object *)(CONCAT44(uStackX_14,uVar6) & 0xffffffffffffff00);
  }
  uVar5 = CONCAT71((int7)(uVar5 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,
             (Object *)StringLiteral_isMovingBackwards,pOVar8,(InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar6 = uStackX_10;
  lVar7 = lRam_?;
  uStackX_10 = uStackX_10 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar1 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar1 + 1,&uStackX_10,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
        uVar9 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        uVar5 = (ulonglong)(uVar6 & 0x3f);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << uVar5;
          }
          UNLOCK();
        } while (!bVar12);
      }
    }
  }
  else {
    pOVar1 = (Object *)(CONCAT44(uStackX_14,uVar6) & 0xffffffffffffff00);
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_isGrounded,
             pOVar1,(InsertionBehavior__Enum)CONCAT71((int7)(uVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  return (Dictionary_2_System_Object_System_Object_ *)this;
}


/* Dictionary`2[System.Object,System.Object] HoverCraftRuntimeData() */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
RuntimeVariablesRepository_HoverCraftRuntimeData(MethodInfo *method)

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
    FUN_?(&StringLiteral_modifiers);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isFiring);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_currentItem);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_shield);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_health);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isDead);
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
  uStackX_10 = 0x43160000;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_10);
  if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
    return pDVar3;
  }
  uVar4 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_health,pOVar1
             ,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_10 = 0;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_10);
  uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_shield,pOVar1
             ,(InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar6 = uStackX_10;
  lVar7 = lRam_?;
  pOVar1 = (Object *)0x0;
  uStackX_10 = uStackX_10 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (value = pOVar1, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      value = (Object *)FUN_?(lRam_?);
      FUN_?(value + 1,&uStackX_10,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(value + 1) >> 0xc);
        uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        uVar5 = (ulonglong)(uVar6 & 0x3f);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << uVar5;
          }
          UNLOCK();
        } while (!bVar11);
      }
    }
  }
  else {
    value = (Object *)(CONCAT44(uStackX_14,uVar6) & 0xffffffffffffff00);
  }
  uVar4 = CONCAT71((int7)(uVar5 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_isFiring,
             value,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  pDVar12 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (pDVar12,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_modifiers,
             (Object *)pDVar12,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  pDVar12 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (pDVar12,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_currentItem,
             (Object *)pDVar12,(InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar6 = uStackX_10;
  lVar7 = lRam_?;
  uStackX_10 = uStackX_10 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar1 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar1 + 1,&uStackX_10,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
        uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        uVar5 = (ulonglong)(uVar6 & 0x3f);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << uVar5;
          }
          UNLOCK();
        } while (!bVar11);
      }
    }
  }
  else {
    pOVar1 = (Object *)(CONCAT44(uStackX_14,uVar6) & 0xffffffffffffff00);
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_isDead,pOVar1
             ,(InsertionBehavior__Enum)CONCAT71((int7)(uVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  return (Dictionary_2_System_Object_System_Object_ *)this;
}


/* Dictionary`2[System.Object,System.Object] JetPackRuntimeData() */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
RuntimeVariablesRepository_JetPackRuntimeData(MethodInfo *method)

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
    FUN_?(&StringLiteral_modifiers);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_jetMode);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_shield);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_health);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isDead);
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
  uStackX_10 = 0x41a00000;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_10);
  if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
    return pDVar3;
  }
  uVar4 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_health,pOVar1
             ,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_10 = 0;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_10);
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_shield,pOVar1
             ,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
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
  uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_modifiers,
             (Object *)this_00,(InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar6 = uStackX_10;
  lVar7 = lRam_?;
  pOVar1 = (Object *)0x0;
  uStackX_10 = uStackX_10 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (value = pOVar1, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      value = (Object *)FUN_?(lRam_?);
      FUN_?(value + 1,&uStackX_10,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(value + 1) >> 0xc);
        uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        uVar5 = (ulonglong)(uVar6 & 0x3f);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << uVar5;
          }
          UNLOCK();
        } while (!bVar11);
      }
    }
  }
  else {
    value = (Object *)(CONCAT44(uStackX_14,uVar6) & 0xffffffffffffff00);
  }
  uVar5 = CONCAT71((int7)(uVar5 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_isDead,value,
             (InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar6 = uStackX_10;
  lVar7 = lRam_?;
  uStackX_10 = uStackX_10 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar1 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar1 + 1,&uStackX_10,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
        uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        uVar5 = (ulonglong)(uVar6 & 0x3f);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << uVar5;
          }
          UNLOCK();
        } while (!bVar11);
      }
    }
  }
  else {
    pOVar1 = (Object *)(CONCAT44(uStackX_14,uVar6) & 0xffffffffffffff00);
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_jetMode,
             pOVar1,(InsertionBehavior__Enum)CONCAT71((int7)(uVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  return (Dictionary_2_System_Object_System_Object_ *)this;
}


/* Dictionary`2[System.Object,System.Object] MonoPlaneRuntimeData() */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
RuntimeVariablesRepository_MonoPlaneRuntimeData(MethodInfo *method)

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
    FUN_?(&StringLiteral_modifiers);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isFiring);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_currentItem);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_shield);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_health);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isDead);
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
  uStackX_10 = 0x42a00000;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_10);
  if (this == (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
    return pDVar3;
  }
  uVar4 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_health,pOVar1
             ,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uStackX_10 = 0;
  pOVar1 = (Object *)FUN_?(uRam_?,&uStackX_10);
  uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_shield,pOVar1
             ,(InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar6 = uStackX_10;
  lVar7 = lRam_?;
  pOVar1 = (Object *)0x0;
  uStackX_10 = uStackX_10 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       (value = pOVar1, (*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      value = (Object *)FUN_?(lRam_?);
      FUN_?(value + 1,&uStackX_10,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(value + 1) >> 0xc);
        uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        uVar5 = (ulonglong)(uVar6 & 0x3f);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << uVar5;
          }
          UNLOCK();
        } while (!bVar11);
      }
    }
  }
  else {
    value = (Object *)(CONCAT44(uStackX_14,uVar6) & 0xffffffffffffff00);
  }
  uVar4 = CONCAT71((int7)(uVar5 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_isFiring,
             value,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  pDVar12 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (pDVar12,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_modifiers,
             (Object *)pDVar12,(InsertionBehavior__Enum)uVar4,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  pDVar12 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
            *)FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (pDVar12,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),2);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_currentItem,
             (Object *)pDVar12,(InsertionBehavior__Enum)uVar5,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  uVar6 = uStackX_10;
  lVar7 = lRam_?;
  uStackX_10 = uStackX_10 & 0xffffff00;
  if (*(int *)(lRam_? + 0x28) < 0) {
    if ((*(longlong *)(lRam_? + 0x60) == 0) ||
       ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
      pOVar1 = (Object *)FUN_?(lRam_?);
      FUN_?(pOVar1 + 1,&uStackX_10,(longlong)*(int *)(lVar7 + 0xf8) + -0x10);
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
        uVar8 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        uVar5 = (ulonglong)(uVar6 & 0x3f);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << uVar5;
          }
          UNLOCK();
        } while (!bVar11);
      }
    }
  }
  else {
    pOVar1 = (Object *)(CONCAT44(uStackX_14,uVar6) & 0xffffffffffffff00);
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_isDead,pOVar1
             ,(InsertionBehavior__Enum)CONCAT71((int7)(uVar5 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  return (Dictionary_2_System_Object_System_Object_ *)this;
}


/* Dictionary`2[System.Object,System.Object] SentryGun() */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::RuntimeVariablesRepository_SentryGun
          (MethodInfo *method)

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
    FUN_?(&StringLiteral_shield);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_health);
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
  auStackX_10[0] = 0x43960000;
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
               *)0x0) {
    behavior = CONCAT31((int3)((uint)in_R9D >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_health,
               pOVar1,behavior,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    auStackX_10[0] = 0;
    pOVar1 = (Object *)FUN_?(uRam_?,auStackX_10);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)StringLiteral_shield,
               pOVar1,CONCAT31((int3)(behavior >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    return (Dictionary_2_System_Object_System_Object_ *)this;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pDVar3 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar2)();
  return pDVar3;
}


/* Void SetupRuntimeVariable(WorldObjectType, Dictionary`2[System.Object,System.Object]) */

void MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
     RuntimeVariablesRepository_SetupRuntimeVariable
               (WorldObjectType__Enum worldObjectType,
               Dictionary_2_System_Object_System_Object_ *targetRuntimeVariables,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).field_0x1c == 0) {
    FUN_?();
  }
  pDStack_1 = RuntimeVariablesRepository_GetRuntimeVariables(worldObjectType,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                  ,pDStack_1,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Incompatible_types_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pDStack_1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = 0;
  uStack_4 = 0;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  str1 = (Dictionary_2_System_Object_System_Object_ *)0x0;
  uStack_9 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_10 = 2;
  DStack_11._version = (undefined4)uStack_9;
  DStack_11._index = uStack_9._4_4_;
  DStack_11._current.key = (Object *)0x0;
  DStack_11._current.value = (Object *)0x0;
  DStack_11._getEnumeratorRetType = 2;
  DStack_11._36_4_ = 0;
  uStack_12 = 0;
  pDStack_13 = &DStack_11;
  DStack_11._dictionary = pDStack_1;
  while( true ) {
    bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      (&DStack_11,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                      );
    value = DStack_11._current.value;
    pOVar15 = DStack_11._current.key;
    if (bVar14 == 0) {
      return;
    }
    pOStack_16 = DStack_11._current.key;
    pDStack_17 = (Dictionary_2_System_Object_System_Object_ *)DStack_11._current.value;
    if ((Dictionary_2_System_Object_System_Object_ *)DStack_11._current.value ==
        (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    if (targetRuntimeVariables == (Dictionary_2_System_Object_System_Object_ *)0x0) break;
    iVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)targetRuntimeVariables,DStack_11._current.key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar18 < 0) {
      in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                (targetRuntimeVariables,pOVar15,value,(InsertionBehavior__Enum)in_R9,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
    }
    else {
      pDVar19 = (Dictionary_2_System_Object_System_Object_ *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (targetRuntimeVariables,pOVar15,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pDVar19 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
        FUN_?();
        break;
      }
      lVar20 = FUN_?(&(pDVar19->klass->_0).byval_arg);
      lVar21 = FUN_?(&(((Dictionary_2_System_Object_System_Object___Class *)value->klass)->
                              _0).byval_arg);
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      if (lVar20 != lVar21) {
        values = (String__Array *)func_?(TypeInfo__System__String);
        FUN_?(values);
        FUN_?(values,0,StringLiteral_Incompatible_types_);
        FUN_?(pDVar19);
        pTVar22 = mscorlib.dll::System::Object::Object_GetType((Object *)pDVar19,(MethodInfo *)0x0);
        pDVar19 = str1;
        if (pTVar22 != (Type *)0x0) {
          FUN_?(pTVar22);
          pDVar19 = (Dictionary_2_System_Object_System_Object_ *)func_?(3,pTVar22);
        }
        FUN_?(values);
        FUN_?(values,1,pDVar19);
        FUN_?(values);
        uVar23 = func_?(&StringLiteral__and_);
        FUN_?(values,2,uVar23);
        func_?(&
                            MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                           );
        pOVar15 = (Object *)func_?(&pOStack_16);
        FUN_?(pOVar15);
        pTVar22 = mscorlib.dll::System::Object::Object_GetType(pOVar15,(MethodInfo *)0x0);
        pDVar19 = str1;
        if (pTVar22 != (Type *)0x0) {
          FUN_?(pTVar22);
          pDVar19 = (Dictionary_2_System_Object_System_Object_ *)func_?(3,pTVar22);
        }
        FUN_?(values);
        FUN_?(values,3,pDVar19);
        FUN_?(values);
        uVar23 = func_?(&StringLiteral__for_key__);
        FUN_?(values,4,uVar23);
        func_?(&
                            MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                           );
        lVar20 = func_?(&pOStack_16);
        if (lVar20 != 0) {
          FUN_?(lVar20);
          str1 = (Dictionary_2_System_Object_System_Object_ *)func_?(3,lVar20);
        }
        FUN_?(values);
        FUN_?(values,5,str1);
        FUN_?(values);
        func_?(&::StringLiteral__);
        FUN_?(values);
        pSVar24 = mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
        uVar23 = func_?(&TypeInfo__System__ArgumentException);
        pIVar25 = (InvalidEnumArgumentException *)func_?(uVar23);
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1(pIVar25,pSVar24,(MethodInfo *)0x0);
        uVar23 = func_?(&
                                     MethodInfo__MV__Common__CommonUtils__PartialUpdateHashtable_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                                    );
        FUN_?(pIVar25,uVar23);
        goto code_?;
      }
      bVar26 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar19->klass->_1).naturalAligment < bVar26) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar19->klass->_1).typeHierarchy[(ulonglong)bVar26 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        in_R9 = CONCAT71((int7)((ulonglong)in_R9 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (targetRuntimeVariables,pOVar15,value,(InsertionBehavior__Enum)in_R9,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
      }
      else {
        bVar26 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((((Dictionary_2_System_Object_System_Object___Class *)value->klass)->_1).
             naturalAligment < bVar26) ||
           (bVar27 = true,
           (Dictionary_2_System_Object_System_Object___Class *)
           (((Dictionary_2_System_Object_System_Object___Class *)value->klass)->_1).typeHierarchy
           [(ulonglong)bVar26 - 1] !=
           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          bVar27 = false;
        }
        source = str1;
        if (bVar27) {
          source = (Dictionary_2_System_Object_System_Object_ *)value;
        }
        MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                  (pDVar19,source,(MethodInfo *)0x0);
      }
    }
  }
  FUN_?();
code_?:
  func_?(&
                      MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                     );
  lVar20 = func_?(&pOStack_16);
  if (lVar20 == 0) {
    pSVar24 = (String *)func_?(&StringLiteral_Update_table_contains_NULL_valye);
  }
  else {
    pSVar24 = (String *)func_?(&StringLiteral_Update_table_contains_NULL_valye);
    FUN_?(lVar20);
    str1 = (Dictionary_2_System_Object_System_Object_ *)func_?(3,lVar20);
  }
  str2 = (String *)func_?(&::StringLiteral__);
  pSVar24 = mscorlib.dll::System::String::String_Concat_5
                      (pSVar24,(String *)str1,str2,(MethodInfo *)0x0);
  uVar23 = func_?(&TypeInfo__System__ArgumentException);
  pIVar25 = (InvalidEnumArgumentException *)func_?(uVar23);
  System.dll::System::ComponentModel::InvalidEnumArgumentException::
  InvalidEnumArgumentException__ctor_1(pIVar25,pSVar24,(MethodInfo *)0x0);
  uVar23 = func_?(&
                               MethodInfo__MV__Common__CommonUtils__PartialUpdateHashtable_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                              );
  FUN_?(pIVar25,uVar23);
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* RuntimeVariablesRepository() */

void MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
     RuntimeVariablesRepository__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         FUN_?(
                      TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                      );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Dictionary__
            );
  pDVar1 = RuntimeVariablesRepository_AvatarRuntimeData((MethodInfo *)0x0);
  if (this != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)in_R9 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0,(Object *)pDVar1,
               (InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ->klass->rgctx_data[0x22].method);
    pDVar1 = RuntimeVariablesRepository_BuildModeAvatarRuntimeData((MethodInfo *)0x0);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x85,(Object *)pDVar1,
               (InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ->klass->rgctx_data[0x22].method);
    pDVar1 = RuntimeVariablesRepository_HoverCraftRuntimeData((MethodInfo *)0x0);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x38,(Object *)pDVar1,
               (InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ->klass->rgctx_data[0x22].method);
    pDVar1 = RuntimeVariablesRepository_MonoPlaneRuntimeData((MethodInfo *)0x0);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x3a,(Object *)pDVar1,
               (InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ->klass->rgctx_data[0x22].method);
    pDVar1 = RuntimeVariablesRepository_JetPackRuntimeData((MethodInfo *)0x0);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x3b,(Object *)pDVar1,
               (InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ->klass->rgctx_data[0x22].method);
    pDVar1 = RuntimeVariablesRepository_AdvancedGhostRuntimeData((MethodInfo *)0x0);
    uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x3d,(Object *)pDVar1,
               (InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
               ->klass->rgctx_data[0x22].method);
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
      FUN_?(&StringLiteral_shield);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_health);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
              *)FUN_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::UIR::UIRenderDevice+DisableForceGammaMaterial]::
    Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
              (pDVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    auStackX_10[0] = 0x43960000;
    pOVar4 = (Object *)FUN_?(uRam_?,auStackX_10);
    if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)0x0) {
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)StringLiteral_health,
                 pOVar4,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      auStackX_10[0] = 0;
      pOVar4 = (Object *)FUN_?(uRam_?,auStackX_10);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__TryInsert
                ((Dictionary_2_System_Object_System_Object_ *)pDVar3,(Object *)StringLiteral_shield,
                 pOVar4,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 ->klass->rgctx_data[0x22].method);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x30,(Object *)pDVar3,
                 (InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ->klass->rgctx_data[0x22].method);
      pDVar1 = RuntimeVariablesRepository_HamsterWheelRuntimeData((MethodInfo *)0x0);
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x3e,(Object *)pDVar1,
                 (InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 ->klass->rgctx_data[0x22].method);
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
        FUN_?(&StringLiteral_takenByList);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar3 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                *)FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (pDVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
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
      if (pDVar3 != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)0x0) {
        uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar3,
                   (Object *)StringLiteral_takenByList,(Object *)this_00,
                   (InsertionBehavior__Enum)uVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this,0x31,(Object *)pDVar3,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::WorldObjectType,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>__Add_MV__WorldObject__WorldObjectType__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   ->klass->rgctx_data[0x22].method);
        TypeInfo__MV__WorldObject__RuntimeVariablesRepository->static_fields->runtimeVariables =
             (Dictionary_2_MV_WorldObject_WorldObjectType_Dictionary_2_System_Object_System_Object_
              *)this;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)
                         TypeInfo__MV__WorldObject__RuntimeVariablesRepository->static_fields >> 0xc
                        );
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
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

