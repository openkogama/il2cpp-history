
/* Void Add(MVCameraBase) */

void Assembly-CSharp.dll::AvatarCamerasWrapper::AvatarCamerasWrapper_Add
               (AvatarCamerasWrapper *this,MVCameraBase *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarCameras;
  if (camera != (MVCameraBase *)0x0) {
    key = (*(camera->klass->vtable).__unknown.methodPtr)
                    (camera,(camera->klass->vtable).__unknown.method);
    if (this_00 != (Dictionary_2_CameraType_MVCameraBase_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,(Object *)camera,
                 CONCAT31((int3)((uint)in_R9D >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Add_CameraType__MVCameraBase_
                 ->klass->rgctx_data[0x22].method);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* List`1[MVCameraBase] GetCameraBases() */

List_1_MVCameraBase_ *
Assembly-CSharp.dll::AvatarCamerasWrapper::AvatarCamerasWrapper_GetCameraBases
          (AvatarCamerasWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<CameraType,_MVCameraBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVCameraBase>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVCameraBase>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<CameraType,_MVCameraBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_MVCameraBase_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<MVCameraBase>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<MVCameraBase>__List__);
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).avatarCameras;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__get_Values__
                            ),
        pDVar2 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    pDStack_3 = (pDVar2->fields)._dictionary;
    ppDStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)0x0;
    uStack_5 = 0;
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&pDStack_7 >> 0xc);
      puVar8 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar9 = *puVar8;
        LOCK();
        uVar10 = *puVar8;
        if (uVar9 == uVar10) {
          *puVar8 = uVar9 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (uVar9 != uVar10);
    }
    if (pDStack_3 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      pDStack_7 = pDStack_3;
      FUN_?();
      pcVar11 = (code *)swi(3);
      pLVar1 = (List_1_MVCameraBase_ *)(*pcVar11)();
      return pLVar1;
    }
    ppDStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   **)((ulonglong)(uint)(pDStack_3->fields)._version << 0x20);
    uStack_5 = 0;
    uStack_12 = (ulonglong)ppDStack_4;
    pOStack_13 = (Object *)0x0;
    pDStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0;
    ppDStack_4 = &pDStack_3;
    while (pDStack_3 !=
           (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           0x0) {
      if (uStack_12._4_4_ != (pDStack_3->fields)._version) goto code_?;
      uVar10 = uStack_12 & 0xffffffff;
      do {
        if (pDStack_3 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) goto code_?;
        uVar6 = (uint)uVar10;
        if ((uint)(pDStack_3->fields)._count <= uVar6) {
          return pLVar1;
        }
        pDVar14 = (pDStack_3->fields)._entries;
        uVar10 = (ulonglong)(uVar6 + 1);
        uStack_12 = CONCAT44(uStack_12._4_4_,uVar6 + 1);
        if (pDVar14 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                       *)0x0) goto code_?;
        if ((uint)pDVar14->max_length <= uVar6) goto code_?;
      } while ((&pDVar14->vector[0].hashCode)[(longlong)(int)uVar6 * 6] < 0);
      pOStack_13 = *(Object **)((longlong)&pDVar14->vector[0].key + (longlong)(int)uVar6 * 0x18 + 8)
      ;
      func_?();
      pMVar15 = MethodInfo__System__Collections__Generic__List<MVCameraBase>__Add_MVCameraBase_;
      if (pLVar1 == (List_1_MVCameraBase_ *)0x0) goto code_?;
      piVar16 = &(pLVar1->fields)._version;
      *piVar16 = *piVar16 + 1;
      pMVar17 = (pLVar1->fields)._items;
      uVar6 = (pLVar1->fields)._size;
      if (pMVar17 == (MVCameraBase__Array *)0x0) goto code_?;
      if (uVar6 < (uint)pMVar17->max_length) {
        (pLVar1->fields)._size = uVar6 + 1;
        FUN_?(pMVar17,(longlong)(int)uVar6,pOStack_13);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)pLVar1,pOStack_13,pMVar15->klass->rgctx_data[0xe].method)
        ;
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar11 = (code *)swi(3);
  pLVar1 = (List_1_MVCameraBase_ *)(*pcVar11)();
  return pLVar1;
}


/* AvatarCamerasWrapper() */

void Assembly-CSharp.dll::AvatarCamerasWrapper::AvatarCamerasWrapper__ctor
               (AvatarCamerasWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<CameraType,_MVCameraBase>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).avatarCameras = (Dictionary_2_CameraType_MVCameraBase_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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
  return;
}

