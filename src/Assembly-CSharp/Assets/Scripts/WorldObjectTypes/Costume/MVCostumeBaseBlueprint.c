
/* Void OnEndEditing() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
     MVCostumeBaseBlueprint_OnEndEditing(MVCostumeBaseBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.editableCubeModel;
  if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
     (this_00 = (pMVar1->fields)._._.transform, this_00 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (this_00,(this->fields)._.cubeModelBaseParent,1,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.editableCubeModel;
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      pBVar2 = MVCubeModelBase::MVCubeModelBase_GetBounds
                         (aBStack_3,(MVCubeModelBase *)pMVar1,(MethodInfo *)0x0);
      uStack_4._0_4_ = (pBVar2->m_Extents).y;
      uStack_4._4_4_ = (pBVar2->m_Extents).z;
      fVar5 = (pBVar2->m_Extents).x;
      pMVar1 = (this->fields)._.editableCubeModel;
      if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
         (obj = (pMVar1->fields)._._.transform, obj != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_6 = 0;
        fStack_7 = 0.0;
        pvVar8 = (obj->fields)._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar8);
        fStack_11 = uStack_4._4_4_ * fStack_7 * _UNK_?;
        uStack_12 = CONCAT44((float)((uint)((float)uStack_4 * uStack_6._4_4_) ^ _UNK_?) *
                             _UNK_?,fVar5 * (float)uStack_6 * _UNK_?);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar8 = (this_00->fields)._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar8);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Quaternion);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pQVar13 = TypeInfo__UnityEngine__Quaternion->static_fields;
        uStack_6._0_4_ = (pQVar13->identityQuaternion).x;
        uStack_6._4_4_ = (pQVar13->identityQuaternion).y;
        fStack_7 = (pQVar13->identityQuaternion).z;
        fStack_14 = (pQVar13->identityQuaternion).w;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar8 = (this_00->fields)._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar8,&uStack_6);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar16 = (pVVar15->oneVector).x;
        uVar17 = (pVVar15->oneVector).y;
        fVar5 = (pVVar15->oneVector).z;
        fVar18 = (float)(*(this->klass->vtable).get_CubeModelScale.methodPtr)(this);
        fStack_11 = fVar5 * fVar18;
        uStack_12 = CONCAT44((float)uVar17 * fVar18,(float)uVar16 * fVar18);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar8 = (this_00->fields)._._.m_CachedPtr;
        if (pvVar8 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcVar9 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(pvVar8,&uStack_12);
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* MVCostumeBaseBlueprint(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
     MVCostumeBaseBlueprint__ctor
               (MVCostumeBaseBlueprint *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  (this->fields)._.cubeModelId = -1;
  (this->fields)._.cubeModelPid = -1;
  MVBlueprintBase::MVBlueprintBase__ctor
            ((MVBlueprintBase *)this,data,worldObjects,(MethodInfo *)0x0);
  piVar1 = &(this->fields)._._._._.interactionFlags;
  *piVar1 = *piVar1 | 0x21030b100;
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBaseBlueprint::
MVCostumeBaseBlueprint_get_DocumentationType(MVCostumeBaseBlueprint *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Costume;
}

