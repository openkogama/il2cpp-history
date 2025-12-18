
/* DesktopLocalizedKeyboardMapping() */

void Assembly-CSharp.dll::DesktopLocalizedKeyboardMapping::DesktopLocalizedKeyboardMapping__ctor
               (DesktopLocalizedKeyboardMapping *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DesktopDefaultKeyboardMapping__ControlBitArray,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopDefaultKeyboardMapping__Reset__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__KeyCode);
    LOCK();
    UNLOCK();
    FUN_?(&_4599282D3F9B45AF3BD85923032DA3555BB21379E7B4794D7CDC90902084CA13_Field);
    LOCK();
    UNLOCK();
    FUN_?(&F002D88D1605774CD2608C1D941E46CAD47C23D0F8E6530B87794DC9244A45AB_Field);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (DesktopDefaultKeyboardMapping_ControlBitArray *)
           FUN_?(TypeInfo__DesktopDefaultKeyboardMapping__ControlBitArray);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Collections__BitArray);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (BitArray *)FUN_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor_1(this_01,0x36,0,(MethodInfo *)0x0);
  iVar2 = iRam_?;
  (pDVar1->fields).controlDown = this_01;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&pDVar1->fields >> 0xc);
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
  (this->fields)._.controlDown = pDVar1;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.controlDown >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerDesktop);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  a = TypeInfo__MVGameControllerDesktop->static_fields->_OnApplicationLostFocus_k__BackingField;
  this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  uVar8 = 0;
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_02,(Object *)this,MethodInfo__DesktopDefaultKeyboardMapping__Reset__,
             (MethodInfo *)0x0);
  pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)a,(Delegate *)this_02,(MethodInfo *)0x0);
  if (pDVar9 != (Delegate *)0x0) {
    pDVar10 = (Delegate *)0x0;
    if ((UnityAction__Class *)pDVar9->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pDVar10 = pDVar9;
    }
    if (pDVar10 == (Delegate *)0x0) {
      FUN_?(pDVar9);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  FUN_?();
  this_03 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_03,
             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Dictionary__
            );
  pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,2);
  if (pOVar12 != (Object *)0x0) {
    if ((*(int *)&pOVar12[1].monitor == 0) ||
       (*(undefined4 *)&pOVar12[2].klass = 0x65, *(uint *)&pOVar12[1].monitor < 2))
    goto code_?;
    *(undefined4 *)((longlong)&pOVar12[2].klass + 4) = 0x20;
    if (this_03 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0)
    {
      uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,0x2c,pOVar12,
                 (InsertionBehavior__Enum)uVar8,
                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                 ->klass->rgctx_data[0x22].method);
      pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
      if (pOVar12 != (Object *)0x0) {
        if (*(int *)&pOVar12[1].monitor == 0) {
code_?:
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        *(undefined4 *)&pOVar12[2].klass = 99;
        uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,0x2d,pOVar12,
                   (InsertionBehavior__Enum)uVar8,
                   MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                   ->klass->rgctx_data[0x22].method);
        pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
        if (pOVar12 != (Object *)0x0) {
          if (*(int *)&pOVar12[1].monitor == 0) goto code_?;
          *(undefined4 *)&pOVar12[2].klass = 0x143;
          uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]
          ::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,5,pOVar12,
                     (InsertionBehavior__Enum)uVar8,
                     MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                     ->klass->rgctx_data[0x22].method);
          pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
          if (pOVar12 != (Object *)0x0) {
            if (*(int *)&pOVar12[1].monitor == 0) goto code_?;
            *(undefined4 *)&pOVar12[2].klass = 0x144;
            uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,6,pOVar12,
                       (InsertionBehavior__Enum)uVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                       ->klass->rgctx_data[0x22].method);
            pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
            if (pOVar12 != (Object *)0x0) {
              if (*(int *)&pOVar12[1].monitor == 0) goto code_?;
              *(undefined4 *)&pOVar12[2].klass = 0x7f;
              uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,8,pOVar12,
                         (InsertionBehavior__Enum)uVar8,
                         MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                         ->klass->rgctx_data[0x22].method);
              pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
              if (pOVar12 != (Object *)0x0) {
                if (*(int *)&pOVar12[1].monitor == 0) goto code_?;
                *(undefined4 *)&pOVar12[2].klass = 0x1b;
                uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,9,pOVar12,
                           (InsertionBehavior__Enum)uVar8,
                           MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                           ->klass->rgctx_data[0x22].method);
                pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,2);
                if (pOVar12 != (Object *)0x0) {
                  if ((*(int *)&pOVar12[1].monitor == 0) ||
                     (*(undefined4 *)&pOVar12[2].klass = 0x130, *(uint *)&pOVar12[1].monitor < 2))
                  goto code_?;
                  *(undefined4 *)((longlong)&pOVar12[2].klass + 4) = 0x12f;
                  uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,10,pOVar12,
                             (InsertionBehavior__Enum)uVar8,
                             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                             ->klass->rgctx_data[0x22].method);
                  pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                  if (pOVar12 != (Object *)0x0) {
                    if (*(int *)&pOVar12[1].monitor == 0) goto code_?;
                    *(undefined4 *)&pOVar12[2].klass = 0x7a;
                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Object]::
                    Dictionary_2_System_Int32Enum_System_Object__TryInsert
                              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,0xb,pOVar12,
                               (InsertionBehavior__Enum)uVar8,
                               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                               ->klass->rgctx_data[0x22].method);
                    pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                    if (pOVar12 != (Object *)0x0) {
                      if (*(int *)&pOVar12[1].monitor == 0) goto code_?;
                      *(undefined4 *)&pOVar12[2].klass = 0x78;
                      uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,0xc,pOVar12,
                                 (InsertionBehavior__Enum)uVar8,
                                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                 ->klass->rgctx_data[0x22].method);
                      pAVar13 = (Array *)FUN_?(TypeInfo__UnityEngine__KeyCode,4);
                      mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
                      RuntimeHelpers_InitializeArray_1
                                (pAVar13,
                                 __4599282D3F9B45AF3BD85923032DA3555BB21379E7B4794D7CDC90902084CA13_Field
                                 ,(MethodInfo *)0x0);
                      uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32Enum,System::Object]::
                      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,0xd,
                                 (Object *)pAVar13,(InsertionBehavior__Enum)uVar8,
                                 MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                 ->klass->rgctx_data[0x22].method);
                      pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                      if (pOVar12 != (Object *)0x0) {
                        if (*(int *)&pOVar12[1].monitor == 0) goto code_?;
                        *(undefined4 *)&pOVar12[2].klass = 0x66;
                        uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32Enum,System::Object]::
                        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,0xe,
                                   pOVar12,(InsertionBehavior__Enum)uVar8,
                                   MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                   ->klass->rgctx_data[0x22].method);
                        pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                        if (pOVar12 != (Object *)0x0) {
                          if (*(int *)&pOVar12[1].monitor == 0) goto code_?;
                          *(undefined4 *)&pOVar12[2].klass = 0x68;
                          uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32Enum,System::Object]::
                          Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                    ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,0x28,
                                     pOVar12,(InsertionBehavior__Enum)uVar8,
                                     MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                     ->klass->rgctx_data[0x22].method);
                          pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,2);
                          if (pOVar12 != (Object *)0x0) {
                            if ((*(int *)&pOVar12[1].monitor == 0) ||
                               (*(undefined4 *)&pOVar12[2].klass = 0x74,
                               *(uint *)&pOVar12[1].monitor < 2)) goto code_?;
                            *(undefined4 *)((longlong)&pOVar12[2].klass + 4) = 0xd;
                            uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32Enum,System::Object]::
                            Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                      ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,0xf,
                                       pOVar12,(InsertionBehavior__Enum)uVar8,
                                       MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                       ->klass->rgctx_data[0x22].method);
                            pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                            if (pOVar12 != (Object *)0x0) {
                              if (*(int *)&pOVar12[1].monitor == 0) goto code_?;
                              *(undefined4 *)&pOVar12[2].klass = 0x6b;
                              uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,
                                         0x10,pOVar12,(InsertionBehavior__Enum)uVar8,
                                         MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                         ->klass->rgctx_data[0x22].method);
                              pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                              if (pOVar12 != (Object *)0x0) {
                                if (*(int *)&pOVar12[1].monitor == 0) goto code_?;
                                *(undefined4 *)&pOVar12[2].klass = 0x79;
                                uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Int32Enum,System::Object]::
                                Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                          ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03,
                                           0x11,pOVar12,(InsertionBehavior__Enum)uVar8,
                                           MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                           ->klass->rgctx_data[0x22].method);
                                pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                                if (pOVar12 != (Object *)0x0) {
                                  if (*(int *)&pOVar12[1].monitor == 0) goto code_?;
                                  *(undefined4 *)&pOVar12[2].klass = 9;
                                  uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_03
                                             ,0x12,pOVar12,(InsertionBehavior__Enum)uVar8,
                                             MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                             ->klass->rgctx_data[0x22].method);
                                  pOVar12 = (Object *)FUN_?(TypeInfo__UnityEngine__KeyCode,1)
                                  ;
                                  if (pOVar12 != (Object *)0x0) {
                                    if (*(int *)&pOVar12[1].monitor == 0) goto code_?;
                                    *(undefined4 *)&pOVar12[2].klass = 0x76;
                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                    ::Int32Enum,System::Object]::
                                    Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                              ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                               this_03,0x13,pOVar12,(InsertionBehavior__Enum)uVar8,
                                               MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                               ->klass->rgctx_data[0x22].method);
                                    pOVar12 = (Object *)
                                             FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                                    if (pOVar12 != (Object *)0x0) {
                                      if (*(int *)&pOVar12[1].monitor == 0)
                                      goto code_?;
                                      *(undefined4 *)&pOVar12[2].klass = 0x71;
                                      uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,System::Object]::
                                      Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                 this_03,0x2b,pOVar12,(InsertionBehavior__Enum)uVar8
                                                 ,MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                      pOVar12 = (Object *)
                                               FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                                      if (pOVar12 != (Object *)0x0) {
                                        if (*(int *)&pOVar12[1].monitor == 0)
                                        goto code_?;
                                        *(undefined4 *)&pOVar12[2].klass = 0x65;
                                        uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                                        mscorlib.dll::System::Collections::Generic::
                                        Dictionary`2[System::Int32Enum,System::Object]::
                                        Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                  ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                   this_03,0x14,pOVar12,
                                                   (InsertionBehavior__Enum)uVar8,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                        pOVar12 = (Object *)
                                                 FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                                        if (pOVar12 != (Object *)0x0) {
                                          if (*(int *)&pOVar12[1].monitor == 0)
                                          goto code_?;
                                          *(undefined4 *)&pOVar12[2].klass = 0x76;
                                          uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                                          mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32Enum,System::Object]::
                                          Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                    ((Dictionary_2_System_Int32Enum_System_Object_ *
                                                     )this_03,0x15,pOVar12,
                                                     (InsertionBehavior__Enum)uVar8,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                          pOVar12 = (Object *)
                                                   FUN_?(TypeInfo__UnityEngine__KeyCode,1);
                                          if (pOVar12 != (Object *)0x0) {
                                            if (*(int *)&pOVar12[1].monitor == 0)
                                            goto code_?;
                                            *(undefined4 *)&pOVar12[2].klass = 0x70;
                                            uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                                            mscorlib.dll::System::Collections::Generic::
                                            Dictionary`2[System::Int32Enum,System::Object]::
                                            Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                      ((Dictionary_2_System_Int32Enum_System_Object_
                                                        *)this_03,0x16,pOVar12,
                                                       (InsertionBehavior__Enum)uVar8,
                                                                                                              
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                            pOVar12 = (Object *)
                                                     FUN_?(TypeInfo__UnityEngine__KeyCode,1)
                                            ;
                                            if (pOVar12 != (Object *)0x0) {
                                              if (*(int *)&pOVar12[1].monitor == 0)
                                              goto code_?;
                                              *(undefined4 *)&pOVar12[2].klass = 0x6c;
                                              uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                                              mscorlib.dll::System::Collections::Generic::
                                              Dictionary`2[System::Int32Enum,System::Object]::
                                              Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                        ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x17,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                              pOVar12 = (Object *)
                                                       FUN_?(TypeInfo__UnityEngine__KeyCode,
                                                                     1);
                                              if (pOVar12 != (Object *)0x0) {
                                                if (*(int *)&pOVar12[1].monitor == 0)
                                                goto code_?;
                                                *(undefined4 *)&pOVar12[2].klass = 0x67;
                                                uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2);
                                                mscorlib.dll::System::Collections::Generic::
                                                Dictionary`2[System::Int32Enum,System::Object]::
                                                Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                          ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x18,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                pOVar12 = (Object *)
                                                         FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                if (pOVar12 != (Object *)0x0) {
                                                  if (*(int *)&pOVar12[1].monitor == 0)
                                                  goto code_?;
                                                  *(undefined4 *)&pOVar12[2].klass = 0x31;
                                                  uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2
                                                                   );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x19,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if (*(int *)&pOVar12[1].monitor == 0)
                                                    goto code_?;
                                                    *(undefined4 *)&pOVar12[2].klass = 0x32;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x1a,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if (*(int *)&pOVar12[1].monitor == 0)
                                                    goto code_?;
                                                    *(undefined4 *)&pOVar12[2].klass = 0x33;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x1b,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if (*(int *)&pOVar12[1].monitor == 0)
                                                    goto code_?;
                                                    *(undefined4 *)&pOVar12[2].klass = 0x34;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x35,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if (*(int *)&pOVar12[1].monitor == 0)
                                                    goto code_?;
                                                    *(undefined4 *)&pOVar12[2].klass = 0x72;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x1c,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if (*(int *)&pOVar12[1].monitor == 0)
                                                    goto code_?;
                                                    *(undefined4 *)&pOVar12[2].klass = 0x69;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x1d,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if (*(int *)&pOVar12[1].monitor == 0)
                                                    goto code_?;
                                                    *(undefined4 *)&pOVar12[2].klass = 0x6e;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x1e,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if (*(int *)&pOVar12[1].monitor == 0)
                                                    goto code_?;
                                                    *(undefined4 *)&pOVar12[2].klass = 0x6f;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x1f,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pAVar13 = (Array *)FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,9);
                                                  mscorlib.dll::System::Runtime::CompilerServices::
                                                  RuntimeHelpers::RuntimeHelpers_InitializeArray_1
                                                            (pAVar13,
                                                  _F002D88D1605774CD2608C1D941E46CAD47C23D0F8E6530B87794DC9244A45AB_Field
                                                  ,(MethodInfo *)0x0);
                                                  uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),2
                                                                   );
                                                  mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x22,(Object *)pAVar13,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,2);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if ((*(int *)&pOVar12[1].monitor == 0) ||
                                                       (*(undefined4 *)&pOVar12[2].klass = 0xd,
                                                       *(uint *)&pOVar12[1].monitor < 2))
                                                    goto code_?;
                                                    *(undefined4 *)((longlong)&pOVar12[2].klass + 4)
                                                         = 0x10f;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x23,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if (*(int *)&pOVar12[1].monitor == 0)
                                                    goto code_?;
                                                    *(undefined4 *)&pOVar12[2].klass = 0x112;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x25,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if (*(int *)&pOVar12[1].monitor == 0)
                                                    goto code_?;
                                                    *(undefined4 *)&pOVar12[2].klass = 0x111;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x24,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if (*(int *)&pOVar12[1].monitor == 0)
                                                    goto code_?;
                                                    *(undefined4 *)&pOVar12[2].klass = 9;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x26,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,2);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if ((*(int *)&pOVar12[1].monitor == 0) ||
                                                       (*(undefined4 *)&pOVar12[2].klass = 0x130,
                                                       *(uint *)&pOVar12[1].monitor < 2))
                                                    goto code_?;
                                                    *(undefined4 *)((longlong)&pOVar12[2].klass + 4)
                                                         = 0x12f;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x27,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,2);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if ((*(int *)&pOVar12[1].monitor == 0) ||
                                                       (*(undefined4 *)&pOVar12[2].klass = 0x6d,
                                                       *(uint *)&pOVar12[1].monitor < 2))
                                                    goto code_?;
                                                    *(undefined4 *)((longlong)&pOVar12[2].klass + 4)
                                                         = 0x1b;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x29,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if (*(int *)&pOVar12[1].monitor == 0)
                                                    goto code_?;
                                                    *(undefined4 *)&pOVar12[2].klass = 0x1b;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x2a,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,2);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if ((*(int *)&pOVar12[1].monitor == 0) ||
                                                       (*(undefined4 *)&pOVar12[2].klass = 0x130,
                                                       *(uint *)&pOVar12[1].monitor < 2))
                                                    goto code_?;
                                                    *(undefined4 *)((longlong)&pOVar12[2].klass + 4)
                                                         = 0x12f;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x32,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,2);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if ((*(int *)&pOVar12[1].monitor == 0) ||
                                                       (*(undefined4 *)&pOVar12[2].klass = 0x77,
                                                       *(uint *)&pOVar12[1].monitor < 2))
                                                    goto code_?;
                                                    *(undefined4 *)((longlong)&pOVar12[2].klass + 4)
                                                         = 0x111;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x2e,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,2);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if ((*(int *)&pOVar12[1].monitor == 0) ||
                                                       (*(undefined4 *)&pOVar12[2].klass = 0x61,
                                                       *(uint *)&pOVar12[1].monitor < 2))
                                                    goto code_?;
                                                    *(undefined4 *)((longlong)&pOVar12[2].klass + 4)
                                                         = 0x114;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x2f,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,2);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if ((*(int *)&pOVar12[1].monitor == 0) ||
                                                       (*(undefined4 *)&pOVar12[2].klass = 100,
                                                       *(uint *)&pOVar12[1].monitor < 2))
                                                    goto code_?;
                                                    *(undefined4 *)((longlong)&pOVar12[2].klass + 4)
                                                         = 0x113;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x30,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,2);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if ((*(int *)&pOVar12[1].monitor == 0) ||
                                                       (*(undefined4 *)&pOVar12[2].klass = 0x73,
                                                       *(uint *)&pOVar12[1].monitor < 2))
                                                    goto code_?;
                                                    *(undefined4 *)((longlong)&pOVar12[2].klass + 4)
                                                         = 0x112;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x31,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if (*(int *)&pOVar12[1].monitor == 0)
                                                    goto code_?;
                                                    *(undefined4 *)&pOVar12[2].klass = 0x72;
                                                    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8)
                                                                      ,2);
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x33,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if (*(int *)&pOVar12[1].monitor == 0)
                                                    goto code_?;
                                                    *(undefined4 *)&pOVar12[2].klass = 0x6a;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_03,0x34,pOVar12,
                                                  (InsertionBehavior__Enum)
                                                  CONCAT71((int7)((ulonglong)uVar8 >> 8),2),
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Add_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  bVar7 = iRam_? != 0;
                                                  (this->fields)._.keyMapping =
                                                       (
                                                  Dictionary_2_KogamaControls_UnityEngine_KeyCode__1
                                                  *)this_03;
                                                  if (bVar7) {
                                                    uVar3 = (uint)((ulonglong)&this->fields >> 0xc)
                                                    ;
                                                    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) *
                                                             8;
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
                                                  this_00 = (this->fields)._.keyMapping;
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Remove_KogamaControls_
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  FUN_?(&
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__set_Item_KogamaControls__UnityEngine__KeyCode____
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  FUN_?(&TypeInfo__UnityEngine__KeyCode);
                                                  LOCK();
                                                  UNLOCK();
                                                  FUN_?(&
                                                  TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager
                                                  );
                                                  LOCK();
                                                  UNLOCK();
                                                  cRam_? = '\x01';
                                                  }
                                                  if (cRam_? == '\0') {
                                                    FUN_?(&TypeInfo__MVGameControllerBase);
                                                    LOCK();
                                                    UNLOCK();
                                                    cRam_? = '\x01';
                                                  }
                                                  pMVar14 = TypeInfo__MVGameControllerBase->
                                                           static_fields->instance;
                                                  if (pMVar14 != (MVGameControllerBase *)0x0) {
                                                    plVar15 = (longlong *)
                                                              (*(pMVar14->klass->vtable).__unknown.
                                                                methodPtr)(pMVar14,(pMVar14->klass->
                                                                                  vtable).__unknown.
                                                                                  method);
                                                    if (plVar15 != (longlong *)0x0) {
                                                      lVar4 = *plVar15;
                                                      bVar16 = (
                                                  TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager
                                                  ->_1).naturalAligment;
                                                  if (((bVar16 <= *(byte *)(lVar4 + 0x130)) &&
                                                      (*(WebAdManager__Class **)
                                                        (*(longlong *)(lVar4 + 200) + -8 +
                                                        (ulonglong)bVar16 * 8) ==
                                                                                                              
                                                  TypeInfo__Assets__Scripts__AdIntegration__Web__WebAdManager
                                                  )) && ((int)plVar15[9] == 6)) {
                                                    if (this_00 !=
                                                        (
                                                  Dictionary_2_KogamaControls_UnityEngine_KeyCode__1
                                                  *)0x0) {
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__Remove
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_00,0x2a,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__Remove_KogamaControls_
                                                  );
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 != (Object *)0x0) {
                                                    if (*(int *)&pOVar12[1].monitor != 0) {
                                                      *(undefined4 *)&pOVar12[2].klass = 0x70;
                                                      uVar8 = CONCAT71((int7)((ulonglong)lVar4 >>
                                                                              8),1);
                                                      mscorlib.dll::System::Collections::Generic::
                                                      Dictionary`2[System::Int32Enum,System::Object]
                                                      ::
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_00,0x29,pOVar12,
                                                  (InsertionBehavior__Enum)uVar8,
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__set_Item_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  pOVar12 = (Object *)
                                                           FUN_?(
                                                  TypeInfo__UnityEngine__KeyCode,1);
                                                  if (pOVar12 == (Object *)0x0)
                                                  goto code_?;
                                                  if (*(int *)&pOVar12[1].monitor != 0) {
                                                    *(undefined4 *)&pOVar12[2].klass = 0x6d;
                                                    mscorlib.dll::System::Collections::Generic::
                                                    Dictionary`2[System::Int32Enum,System::Object]::
                                                                                                        
                                                  Dictionary_2_System_Int32Enum_System_Object__TryInsert
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_00,0x16,pOVar12,
                                                  (InsertionBehavior__Enum)
                                                  CONCAT71((int7)((ulonglong)uVar8 >> 8),1),
                                                  MethodInfo__System__Collections__Generic__Dictionary<KogamaControls,_UnityEngine::KeyCode_[]>__set_Item_KogamaControls__UnityEngine__KeyCode____
                                                  ->klass->rgctx_data[0x22].method);
                                                  goto code_?;
                                                  }
                                                  }
                                                  goto code_?;
                                                  }
                                                  }
                                                  goto code_?;
                                                  }
                                                  }
code_?:
                                                  bVar7 = iRam_? != 0;
                                                  (this->fields)._.keyMapping = this_00;
                                                  if (bVar7) {
                                                    uVar3 = (uint)((ulonglong)&this->fields >> 0xc)
                                                    ;
                                                    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) *
                                                             8;
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
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

