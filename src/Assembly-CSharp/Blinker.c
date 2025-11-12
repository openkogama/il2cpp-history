
/* Void DestroyBlinkerMaterial() */

void Assembly-CSharp.dll::Blinker::Blinker_DestroyBlinkerMaterial(Blinker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).blinkMaterial;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar1 != (Material *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pMVar1 = (this->fields).blinkMaterial;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pMVar1,0.0,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Draw(Mesh, Transform, Camera, Int32) */

void Assembly-CSharp.dll::Blinker::Blinker_Draw
               (Blinker *this,Mesh *mesh,Transform *tfm,Camera *targetCamera,int32_t layerMask,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = Blinker_get_IsExpired(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)();
    fVar4 = fVar4 * (this->fields).blinkInterval;
    fVar5 = (float)func_?(fVar4);
    fVar4 = fVar4 - fVar5;
    if ((fVar4 < 0.0) || ((fVar4 <= _UNK_? && (fVar4 < _UNK_?)))) {
      submeshIndex = 0;
      if (mesh == (Mesh *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      while( true ) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Mesh>_UnityEngine__Mesh_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar6 = (mesh->fields)._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)mesh,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        iVar7 = (*pcRam_?)(pvVar6);
        if (iVar7 <= submeshIndex) break;
        if (tfm == (Transform *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        MStack_8.m00 = 0.0;
        MStack_8.m10 = 0.0;
        MStack_8.m20 = 0.0;
        MStack_8.m30 = 0.0;
        MStack_8.m01 = 0.0;
        MStack_8.m11 = 0.0;
        MStack_8.m21 = 0.0;
        MStack_8.m31 = 0.0;
        MStack_8.m02 = 0.0;
        MStack_8.m12 = 0.0;
        MStack_8.m22 = 0.0;
        MStack_8.m32 = 0.0;
        MStack_8.m03 = 0.0;
        MStack_8.m13 = 0.0;
        MStack_8.m23 = 0.0;
        MStack_8.m33 = 0.0;
        pvVar6 = (tfm->fields)._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)tfm,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pvVar6,&MStack_8);
        material = (this->fields).blinkMaterial;
        if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
          FUN_?();
        }
        MStack_9.m00 = MStack_8.m00;
        MStack_9.m10 = MStack_8.m10;
        MStack_9.m20 = MStack_8.m20;
        MStack_9.m30 = MStack_8.m30;
        MStack_9.m01 = MStack_8.m01;
        MStack_9.m11 = MStack_8.m11;
        MStack_9.m21 = MStack_8.m21;
        MStack_9.m31 = MStack_8.m31;
        MStack_9.m02 = MStack_8.m02;
        MStack_9.m12 = MStack_8.m12;
        MStack_9.m22 = MStack_8.m22;
        MStack_9.m32 = MStack_8.m32;
        MStack_9.m03 = MStack_8.m03;
        MStack_9.m13 = MStack_8.m13;
        MStack_9.m23 = MStack_8.m23;
        MStack_9.m33 = MStack_8.m33;
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh_3
                  (mesh,&MStack_9,material,layerMask,targetCamera,submeshIndex,(MethodInfo *)0x0);
        submeshIndex = submeshIndex + 1;
      }
    }
  }
  return;
}


/* Void Start(Single) */

void Assembly-CSharp.dll::Blinker::Blinker_Start(Blinker *this,float duration,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  (this->fields).blinkDuration = duration;
  (this->fields).blinkStartTime = fVar3;
  return;
}


/* Blinker(Single, Material, Color) */

void Assembly-CSharp.dll::Blinker::Blinker__ctor
               (Blinker *this,float interval,Material *m,Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).blinkInterval = 2.0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar1 = (Material *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)m,
                      UnityEngine__Material_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::Material>_UnityEngine__Material_
                     );
  bVar2 = iRam_? != 0;
  (this->fields).blinkMaterial = pMVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
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
  pMVar1 = (this->fields).blinkMaterial;
  if (pMVar1 == (Material *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  aCStack_8[0].r = color->r;
  aCStack_8[0].g = color->g;
  aCStack_8[0].b = color->b;
  aCStack_8[0].a = color->a;
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
            (pMVar1,aCStack_8,(MethodInfo *)0x0);
  (this->fields).blinkInterval = interval;
  return;
}


/* Boolean get_IsExpired() */

bool Assembly-CSharp.dll::Blinker::Blinker_get_IsExpired(Blinker *this,MethodInfo *method)

{
  fVar1 = (this->fields).blinkDuration;
  fVar2 = (this->fields).blinkStartTime;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    bVar5 = (*pcVar3)();
    return bVar5;
  }
  pcRam_? = pcVar3;
  fVar6 = (float)(*pcRam_?)();
  return fVar1 + fVar2 < fVar6;
}

