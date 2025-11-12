
/* IAsyncResult BeginInvoke(GizmoTransform, GizmoTransform+ChangeData, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::RTG::GizmoEntityTransformChangedHandler::
GizmoEntityTransformChangedHandler_BeginInvoke
          (GizmoEntityTransformChangedHandler *this,GizmoTransform *transform,
          GizmoTransform_ChangeData changeData,AsyncCallback *callback,Object *object,
          MethodInfo *method)

{
  aGStackX_18[0] = changeData;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoTransform__ChangeData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pGStack_2 = transform;
  uStack_3 = FUN_?(TypeInfo__RTG__GizmoTransform__ChangeData,aGStackX_18);
  pIVar4 = (IAsyncResult *)FUN_?(this,&pGStack_2,callback,object);
  return pIVar4;
}

