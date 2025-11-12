
/* Dictionary`2[System.Object,System.Object] GetDataParameters(Int32, BytePacker, KogamaDataType,
   Boolean) */

Dictionary_2_System_Object_System_Object_ *
MVWorldObject.dll::MV::WorldObject::KogamaDataHandlerWrapper::
KogamaDataHandlerWrapper_GetDataParameters
          (int32_t serializeVersion,BytePacker *bp,KogamaDataType__Enum kogamaDataType,
          bool readRuntimeData,MethodInfo *method)

{
  uVar1 = CONCAT71(in_register_00000089,readRuntimeData);
  if (serializeVersion == 0xb) {
    KVar2 = kogamaDataType & 0xff;
    if ((char)kogamaDataType == '\0') {
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
        FUN_?(&TypeInfo__MV__WorldObject__PrototypeDataParameters);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (bp != (BytePacker *)0x0) {
        fVar3 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        fVar4 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
        fVar5 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        iVar6 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        value = BytePacker::BytePacker_ReadBytes(bp,iVar6,(MethodInfo *)0x0);
        pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (pDVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        fVar8 = fStackX_8;
        pPVar9 = TypeInfo__MV__WorldObject__PrototypeDataParameters;
        fStackX_8 = (float)((uint)fStackX_8 & 0xffffff00);
        iVar10._0_2_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.attrs;
        iVar10._2_1_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.type;
        iVar10._3_1_ = (TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).byval_arg.field_0xb;
        if (iVar10 < 0) {
          if (((TypeInfo__MV__WorldObject__PrototypeDataParameters->_0).generic_class ==
               (Il2CppGenericClass *)0x0) ||
             (((TypeInfo__MV__WorldObject__PrototypeDataParameters->_1).field_0x6d & 8) == 0)) {
            pOVar11 = (Object *)FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters);
            FUN_?(pOVar11 + 1,&fStackX_8,(longlong)(int)(pPVar9->_1).instance_size + -0x10);
            if (iRam_? != 0) {
              uVar1 = 0xADDR;
              uVar12 = (uint)((ulonglong)(pOVar11 + 1) >> 0xc);
              uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
              do {
                uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
                puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
                LOCK();
                bVar16 = uVar14 == *puVar15;
                if (bVar16) {
                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (!bVar16);
            }
          }
          else {
            pOVar11 = (Object *)0x0;
          }
        }
        else {
          pOVar11 = (Object *)(CONCAT44(uStackX_c,fVar8) & 0xffffffffffffff00);
        }
        fStackX_8 = fVar3;
        pOVar17 = (Object *)FUN_?(uRam_?,&fStackX_8);
        if (pDVar7 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)0x0) {
          uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar7,pOVar11,pOVar17,
                     (InsertionBehavior__Enum)uVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,1);
          pOVar11 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&fStackX_8);
          fStackX_8 = fVar4;
          pOVar17 = (Object *)FUN_?(uRam_?,&fStackX_8);
          uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar7,pOVar11,pOVar17,
                     (InsertionBehavior__Enum)uVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          fStackX_8._0_1_ = 2;
          pOVar11 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&fStackX_8);
          uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar7,pOVar11,(Object *)value,
                     (InsertionBehavior__Enum)uVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,3);
          pOVar11 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__PrototypeDataParameters,&fStackX_8);
          fStackX_8 = fVar5;
          pOVar17 = (Object *)FUN_?(uRam_?,&fStackX_8);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar7,pOVar11,pOVar17,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          return (Dictionary_2_System_Object_System_Object_ *)pDVar7;
        }
      }
      FUN_?();
      pcVar18 = (code *)swi(3);
      pDVar19 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar18)();
      return pDVar19;
    }
    if (KVar2 == KogamaDataType__Enum_WorldObjects) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      ,readRuntimeData,0);
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
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__MV__WorldObject__WorldObjectType);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (bp != (BytePacker *)0x0) {
        fVar3 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        fVar5 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        fVar4 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        fVar20 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        fVar21 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
        fVar22 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
        fVar23 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
        fVar24 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
        fVar25 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
        fVar26 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
        fVar27 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
        fVar28 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
        fVar29 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
        fVar30 = BytePacker::BytePacker_ReadSingle(bp,(MethodInfo *)0x0);
        pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (pDVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        iVar6 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        uVar1 = 0;
        BytePackerFunctions::BytePackerFunctionsVersion11::
        BytePackerFunctionsVersion11_GetHashTableFromBytePacker
                  (bp,(Dictionary_2_System_Object_System_Object_ *)pDVar7,iVar6,(MethodInfo *)0x0)
        ;
        this = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                *)FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (this,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        fVar8 = fStackX_8;
        pWVar31 = TypeInfo__MV__WorldObject__WorldObjectDataParameters;
        fStackX_8 = (float)((uint)fStackX_8 & 0xffffff00);
        iVar32._0_2_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.attrs;
        iVar32._2_1_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.type;
        iVar32._3_1_ = (TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).byval_arg.field_0xb
        ;
        if (iVar32 < 0) {
          if (((TypeInfo__MV__WorldObject__WorldObjectDataParameters->_0).generic_class ==
               (Il2CppGenericClass *)0x0) ||
             (((TypeInfo__MV__WorldObject__WorldObjectDataParameters->_1).field_0x6d & 8) == 0)) {
            pOVar11 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters);
            FUN_?(pOVar11 + 1,&fStackX_8,(longlong)(int)(pWVar31->_1).instance_size + -0x10)
            ;
            if (iRam_? != 0) {
              uVar1 = 0xADDR;
              uVar12 = (uint)((ulonglong)(pOVar11 + 1) >> 0xc);
              uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
              do {
                uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
                puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
                LOCK();
                bVar16 = uVar14 == *puVar15;
                if (bVar16) {
                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (!bVar16);
            }
          }
          else {
            pOVar11 = (Object *)0x0;
          }
        }
        else {
          pOVar11 = (Object *)(CONCAT44(uStackX_c,fVar8) & 0xffffffffffffff00);
        }
        fStackX_8 = fVar3;
        pOVar17 = (Object *)FUN_?(uRam_?,&fStackX_8);
        if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                     *)0x0) {
          uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this,pOVar11,pOVar17,
                     (InsertionBehavior__Enum)uVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,1);
          pOVar11 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&fStackX_8);
          fStackX_8 = fVar5;
          pOVar17 = (Object *)FUN_?(uRam_?,&fStackX_8);
          uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this,pOVar11,pOVar17,
                     (InsertionBehavior__Enum)uVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,2);
          pOVar11 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&fStackX_8);
          fStackX_8 = fVar4;
          pOVar17 = (Object *)FUN_?(uRam_?,&fStackX_8);
          uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this,pOVar11,pOVar17,
                     (InsertionBehavior__Enum)uVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,3);
          pOVar11 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&fStackX_8);
          fStackX_8 = fVar20;
          pOVar17 = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectType,&fStackX_8);
          uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this,pOVar11,pOVar17,
                     (InsertionBehavior__Enum)uVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          fStackX_8._0_1_ = 4;
          pOVar11 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&fStackX_8);
          uStack_33 = CONCAT44(fVar22,fVar21);
          fStack_34 = fVar23;
          pOVar17 = (Object *)FUN_?(TypeInfo__UnityEngine__Vector3,&uStack_33);
          uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this,pOVar11,pOVar17,
                     (InsertionBehavior__Enum)uVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          fStackX_8._0_1_ = 5;
          pOVar11 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&fStackX_8);
          uStack_33 = CONCAT44(fVar25,fVar24);
          fStack_34 = fVar26;
          fStack_35 = fVar27;
          pOVar17 = (Object *)FUN_?(TypeInfo__UnityEngine__Quaternion,&uStack_33);
          uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this,pOVar11,pOVar17,
                     (InsertionBehavior__Enum)uVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          fStackX_8._0_1_ = 6;
          pOVar11 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&fStackX_8);
          uStack_33 = CONCAT44(fVar29,fVar28);
          fStack_34 = fVar30;
          pOVar17 = (Object *)FUN_?(TypeInfo__UnityEngine__Vector3,&uStack_33);
          uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this,pOVar11,pOVar17,
                     (InsertionBehavior__Enum)uVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,7);
          pOVar11 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&fStackX_8);
          uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this,pOVar11,(Object *)pDVar7,
                     (InsertionBehavior__Enum)uVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          if (readRuntimeData != 0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uVar36 = BytePacker::BytePacker_ReadByte(bp,(MethodInfo *)0x0);
            if ((uVar36 & 1) != 0) {
              fVar8 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
              fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,9);
              pOVar11 = (Object *)
                        FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                      &fStackX_8);
              fStackX_8 = fVar8;
              pOVar17 = (Object *)FUN_?(uRam_?,&fStackX_8);
              uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this,pOVar11,pOVar17,
                         (InsertionBehavior__Enum)uVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
            }
            if ((uVar36 & 2) != 0) {
              fVar8 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
              fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,10);
              pOVar11 = (Object *)
                        FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,
                                      &fStackX_8);
              fStackX_8 = fVar8;
              pOVar17 = (Object *)FUN_?(uRam_?,&fStackX_8);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)this,pOVar11,pOVar17,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
            }
            iVar6 = BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
            pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                       *)FUN_?(
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                      );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
            Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                      (pDVar7,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            uVar1 = 0;
            BytePackerFunctions::BytePackerFunctionsVersion11::
            BytePackerFunctionsVersion11_GetHashTableFromBytePacker
                      (bp,(Dictionary_2_System_Object_System_Object_ *)pDVar7,iVar6,
                       (MethodInfo *)0x0);
            fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,8);
            pOVar11 = (Object *)
                      FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&fStackX_8)
            ;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryInsert
                      ((Dictionary_2_System_Object_System_Object_ *)this,pOVar11,(Object *)pDVar7,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                       ->klass->rgctx_data[0x22].method);
          }
          return (Dictionary_2_System_Object_System_Object_ *)this;
        }
      }
      FUN_?();
      pcVar18 = (code *)swi(3);
      pDVar19 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar18)();
      return pDVar19;
    }
    if (KVar2 == KogamaDataType__Enum_Links) {
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
        FUN_?(&TypeInfo__MV__WorldObject__LinkDataParameter);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (bp != (BytePacker *)0x0) {
        fVar3 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        fVar5 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        fVar4 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (pDVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        fVar8 = fStackX_8;
        pLVar37 = TypeInfo__MV__WorldObject__LinkDataParameter;
        fStackX_8 = (float)((uint)fStackX_8 & 0xffffff00);
        iVar38._0_2_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.attrs;
        iVar38._2_1_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.type;
        iVar38._3_1_ = (TypeInfo__MV__WorldObject__LinkDataParameter->_0).byval_arg.field_0xb;
        if (iVar38 < 0) {
          if (((TypeInfo__MV__WorldObject__LinkDataParameter->_0).generic_class ==
               (Il2CppGenericClass *)0x0) ||
             (((TypeInfo__MV__WorldObject__LinkDataParameter->_1).field_0x6d & 8) == 0)) {
            pOVar11 = (Object *)FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter);
            FUN_?(pOVar11 + 1,&fStackX_8,(longlong)(int)(pLVar37->_1).instance_size + -0x10)
            ;
            if (iRam_? != 0) {
              uVar1 = 0xADDR;
              uVar12 = (uint)((ulonglong)(pOVar11 + 1) >> 0xc);
              uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
              do {
                uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
                puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
                LOCK();
                bVar16 = uVar14 == *puVar15;
                if (bVar16) {
                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (!bVar16);
            }
          }
          else {
            pOVar11 = (Object *)0x0;
          }
        }
        else {
          pOVar11 = (Object *)(CONCAT44(uStackX_c,fVar8) & 0xffffffffffffff00);
        }
        fStackX_8 = fVar3;
        pOVar17 = (Object *)FUN_?(uRam_?,&fStackX_8);
        if (pDVar7 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)0x0) {
          uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar7,pOVar11,pOVar17,
                     (InsertionBehavior__Enum)uVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,1);
          pOVar11 = (Object *)FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter,&fStackX_8)
          ;
          fStackX_8 = fVar5;
          pOVar17 = (Object *)FUN_?(uRam_?,&fStackX_8);
          uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar7,pOVar11,pOVar17,
                     (InsertionBehavior__Enum)uVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,2);
          pOVar11 = (Object *)FUN_?(TypeInfo__MV__WorldObject__LinkDataParameter,&fStackX_8)
          ;
          fStackX_8 = fVar4;
          pOVar17 = (Object *)FUN_?(uRam_?,&fStackX_8);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar7,pOVar11,pOVar17,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          return (Dictionary_2_System_Object_System_Object_ *)pDVar7;
        }
      }
      FUN_?();
      pcVar18 = (code *)swi(3);
      pDVar19 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar18)();
      return pDVar19;
    }
    if (KVar2 == KogamaDataType__Enum_ObjectLinks) {
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
        FUN_?(&TypeInfo__MV__WorldObject__ObjectLinkDataParameter);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (bp != (BytePacker *)0x0) {
        fVar3 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        fVar5 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        fVar4 = (float)BytePacker::BytePacker_ReadInt32(bp,(MethodInfo *)0x0);
        pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                   *)FUN_?(
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
        Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                  (pDVar7,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        fVar8 = fStackX_8;
        pOVar39 = TypeInfo__MV__WorldObject__ObjectLinkDataParameter;
        fStackX_8 = (float)((uint)fStackX_8 & 0xffffff00);
        iVar40._0_2_ = (TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).byval_arg.attrs;
        iVar40._2_1_ = (TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).byval_arg.type;
        iVar40._3_1_ = (TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).byval_arg.field_0xb;
        if (iVar40 < 0) {
          if (((TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_0).generic_class ==
               (Il2CppGenericClass *)0x0) ||
             (((TypeInfo__MV__WorldObject__ObjectLinkDataParameter->_1).field_0x6d & 8) == 0)) {
            pOVar11 = (Object *)FUN_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter);
            FUN_?(pOVar11 + 1,&fStackX_8,(longlong)(int)(pOVar39->_1).instance_size + -0x10);
            if (iRam_? != 0) {
              uVar1 = 0xADDR;
              uVar12 = (uint)((ulonglong)(pOVar11 + 1) >> 0xc);
              uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
              do {
                uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
                puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
                LOCK();
                bVar16 = uVar14 == *puVar15;
                if (bVar16) {
                  *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
                }
                UNLOCK();
              } while (!bVar16);
            }
          }
          else {
            pOVar11 = (Object *)0x0;
          }
        }
        else {
          pOVar11 = (Object *)(CONCAT44(uStackX_c,fVar8) & 0xffffffffffffff00);
        }
        fStackX_8 = fVar3;
        pOVar17 = (Object *)FUN_?(uRam_?,&fStackX_8);
        if (pDVar7 !=
            (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)0x0) {
          uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar7,pOVar11,pOVar17,
                     (InsertionBehavior__Enum)uVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,1);
          pOVar11 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&fStackX_8);
          fStackX_8 = fVar5;
          pOVar17 = (Object *)FUN_?(uRam_?,&fStackX_8);
          uVar1 = CONCAT71((int7)((ulonglong)uVar1 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar7,pOVar11,pOVar17,
                     (InsertionBehavior__Enum)uVar1,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          fStackX_8 = (float)CONCAT31(fStackX_8._1_3_,2);
          pOVar11 = (Object *)
                    FUN_?(TypeInfo__MV__WorldObject__ObjectLinkDataParameter,&fStackX_8);
          fStackX_8 = fVar4;
          pOVar17 = (Object *)FUN_?(uRam_?,&fStackX_8);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar7,pOVar11,pOVar17,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
          return (Dictionary_2_System_Object_System_Object_ *)pDVar7;
        }
      }
      FUN_?();
      pcVar18 = (code *)swi(3);
      pDVar19 = (Dictionary_2_System_Object_System_Object_ *)(*pcVar18)();
      return pDVar19;
    }
  }
  return (Dictionary_2_System_Object_System_Object_ *)0x0;
}

