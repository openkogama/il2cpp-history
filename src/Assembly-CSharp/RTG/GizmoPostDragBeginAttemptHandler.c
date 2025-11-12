
/* IAsyncResult BeginInvoke(Gizmo, Int32, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::RTG::GizmoPostDragBeginAttemptHandler::
GizmoPostDragBeginAttemptHandler_BeginInvoke
          (GizmoPostDragBeginAttemptHandler *this,Gizmo *gizmo,int32_t handleId,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  uStack_1 = 0;
  aiStackX_18[0] = handleId;
  pGStack_2 = gizmo;
  uStack_3 = FUN_?(uRam_?,aiStackX_18);
  pIVar4 = (IAsyncResult *)FUN_?(this,&pGStack_2,callback,object);
  return pIVar4;
}

