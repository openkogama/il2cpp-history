
/* Void ActivateCulling(GameObject, GameObject[], Boolean) */

void Assembly-CSharp.dll::DynamicCullingHandler::DynamicCullingHandler_ActivateCulling
               (DynamicCullingHandler *this,GameObject *cullingObject,
               GameObject__Array *cullingGroup,bool keepRootAlive,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingSubscriberDynamic);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Activating_Culling);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Activating_Culling,(MethodInfo *)0x0);
  radius = (this->fields).cullingRadius;
  this_00 = (CullingSubscriberDynamic *)FUN_?(TypeInfo__CullingSubscriberDynamic);
  CullingSubscriberDynamic::CullingSubscriberDynamic__ctor
            (this_00,radius,3,cullingObject,cullingGroup,keepRootAlive,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).cullingSubscriberDynamic = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Void DeActivateCulling() */

void Assembly-CSharp.dll::DynamicCullingHandler::DynamicCullingHandler_DeActivateCulling
               (DynamicCullingHandler *this,MethodInfo *method)

{
  if ((this->fields).cullingSubscriberDynamic != (CullingSubscriberDynamic *)0x0) {
    CullingSubscriberDynamic::CullingSubscriberDynamic_Destroy
              ((this->fields).cullingSubscriberDynamic,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).cullingSubscriberDynamic = (CullingSubscriberDynamic *)0x0;
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
  }
  return;
}


/* Void UpdateCullingRadius(MVWorldObjectClient, ScaleChangedEventArgs) */

void Assembly-CSharp.dll::DynamicCullingHandler::DynamicCullingHandler_UpdateCullingRadius
               (DynamicCullingHandler *this,MVWorldObjectClient *objArg,
               ScaleChangedEventArgs *scaleArg,MethodInfo *method)

{
  if ((scaleArg != (ScaleChangedEventArgs *)0x0) &&
     (pCVar1 = (this->fields).cullingSubscriberDynamic, pCVar1 != (CullingSubscriberDynamic *)0x0))
  {
    fVar2 = (this->fields).cullingRadius;
    fVar3 = (scaleArg->fields).NewScale.y;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    pBVar4 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar4 != (BoundingSphere__Array *)0x0) {
      uVar5 = (pCVar1->fields)._CullingIndex_k__BackingField;
      if (uVar5 < (uint)pBVar4->max_length) {
        pBVar4->vector[(int)uVar5].radius = fVar2 * fVar3;
        return;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

